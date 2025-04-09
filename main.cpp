#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <limits>
#include "score.h"
#include "player.h"
#include "game_logic.h"
#include "computer_ai.h"

using namespace std;

// Prototypes
void displayMainMenu();
void handleContinueGame();
void handleNewGame();
void displayRegisteredUsers();
void deleteUser();
void displayGameRules();
void playGame(const string& playerName, bool playerStartsFirst);
void handlePostRoundMenu(bool& continueGame, bool& backToMainMenu);

int main() {
    int choice;
    string input;

    while(true) {
        displayMainMenu();
        
        getline(cin, input);
        if(input.empty() || !all_of(input.begin(), input.end(), ::isdigit)) {
            cout << "⚠️ Invalid input! Please enter a number.\n\n";
            continue;
        }

        choice = stoi(input);

        switch(choice) {
            case 1:
                handleContinueGame();
                break;
            case 2:
                handleNewGame();
                break;
            case 3:
                displayRegisteredUsers();
                break;
            case 4:
                deleteUser();
                break;
            case 5:
                displayGameRules();
                break;
            case 6:
                cout << "\n🎮 Thank you for playing! Goodbye! 👋\n";
                exit(0);
            default:
                cout << "⚠️ Invalid choice! Please enter 1-6.\n";
                break;
        }
    }
    return 0;
}

void displayMainMenu() {
    system("clear"); // Use "cls" for Windows
    cout << R"(
===========================================
🎮 Welcome to the Rock-Paper-Scissors Game!
===========================================

1. Continue the previous game
2. Start a new game
3. View registered users
4. Delete an existing user
5. View game rules
6. Exit the game
)";
    cout << "\nEnter your choice (1-6): ";
}

void handleContinueGame() {
    vector<Score> scores = loadScoresFromFile();
    if(scores.empty()) {
        cout << "\n⚠️ No previous game found!\n";
        cout << "1. Start new game\n2. Main menu\n3. Exit\nYour choice: ";
        
        string input;
        getline(cin, input);
        
        if(input == "1") handleNewGame();
        else if(input == "3") exit(0);
        return;
    }

    // Get last played game
    Score lastScore = scores.back();
    cout << "\n-----------------------------------\n";
    cout << "Last played round:\n";
    cout << "Player: " << lastScore.playerName << "\n";
    cout << "Score: " << lastScore.wins << "W/" 
         << lastScore.losses << "L/" 
         << lastScore.draws << "D\n";
    cout << "-----------------------------------\n";

    playGame(lastScore.playerName, true);
}

void handleNewGame() {
    string playerName;
    cout << "\nEnter your username: ";
    getline(cin, playerName);

    if(playerName.empty()) {
        cout << "⚠️ Username cannot be empty!\n";
        return;
    }

    cout << "\nWho should play first?\n1. " << playerName << "\n2. Computer\nChoice (1-2): ";
    string choice;
    getline(cin, choice);

    if(choice != "1" && choice != "2") {
        cout << "⚠️ Invalid choice! Starting with player.\n";
        choice = "1";
    }

    playGame(playerName, choice == "1");
}

void playGame(const string& playerName, bool playerStartsFirst) {
    int roundCount = 0;
    bool continueGame = true;
    bool backToMainMenu = false;

    while(continueGame && !backToMainMenu) {
        system("clear");
        cout << "===== Round " << ++roundCount << " =====\n";

        string playerChoice, computerChoice;
        
        if(playerStartsFirst) {
            displayPlayerTurnMessage(playerName);
            playerChoice = handlePlayerTurn();
            computerChoice = generateComputerChoice();
        } else {
            cout << "\n🤖 Computer is playing...\n";
            computerChoice = generateComputerChoice();
            displayPlayerTurnMessage(playerName);
            playerChoice = handlePlayerTurn();
        }

        string winner = determineWinner(playerChoice, computerChoice);
        
        // Update score
        if(winner == "Player") updateScore(playerName, "win");
        else if(winner == "Computer") updateScore(playerName, "loss");
        else updateScore(playerName, "draw");

        // Display results
        cout << "\n-----------------------------------\n";
        cout << "You chose: " << playerChoice << endl;
        cout << "Computer chose: " << computerChoice << endl;
        cout << "Result: " << (winner == "Draw" ? "Draw!" : winner + " wins!") << endl;
        cout << "-----------------------------------\n";

        handlePostRoundMenu(continueGame, backToMainMenu);
    }
}

void handlePostRoundMenu(bool& continueGame, bool& backToMainMenu) {
    cout << "\nWhat would you like to do next?\n";
    cout << "1. Continue\n2. Main menu\n3. Exit\nChoice: ";
    
    string input;
    getline(cin, input);
    
    if(input == "2") backToMainMenu = true;
    else if(input == "3") exit(0);
    else if(input != "1") {
        cout << "⚠️ Invalid choice! Continuing game...\n";
        continueGame = true;
    }
}

void displayRegisteredUsers() {
    vector<Score> scores = loadScoresFromFile();
    system("clear");
    
    cout << "\n=== Registered Users ===\n";
    if(scores.empty()) {
        cout << "No users found!\n";
    } else {
        for(const auto& score : scores) {
            cout << "- " << score.playerName << endl;
        }
    }
    cout << "\nPress Enter to continue...";
    cin.ignore();
}

void deleteUser() {
    vector<Score> scores = loadScoresFromFile();
    string target;
    
    cout << "\nEnter username to delete: ";
    getline(cin, target);
    
    auto it = remove_if(scores.begin(), scores.end(), [&](const Score& s) {
        return s.playerName == target;
    });
    
    if(it != scores.end()) {
        scores.erase(it, scores.end());
        // Save each score individually
        for (const auto& score : scores) {
            saveScoreToFile(score);
        }
        cout << "✅ User deleted successfully!\n";
    } else {
        cout << "⚠️ User not found!\n";
    }
}


void displayGameRules() {
    system("clear");
    cout << R"(
=== Game Rules ===
1. Choose between Rock (Ro), Paper (Pa), or Scissors (Sc)
2. Rock beats Scissors
3. Scissors beat Paper
4. Paper beats Rock
5. First to 3 wins claims victory!

Special Commands:
- During play: Type 'exit' to quit
- Menu navigation: Use numbers 1-6
)";
    cout << "\nPress Enter to continue...";
    cin.ignore();
}

