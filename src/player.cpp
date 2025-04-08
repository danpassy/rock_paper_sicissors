/*
* 		From Dan BOUSSOUGOU
* 		   3/04/2025
* 	   file for player logic game
*/

#include <iostream>
#include <string>
#include <game_logic.h>
#include <player.h>
#include <algorithm> //( transform())
#include <limits> // std::numeric_limits

/*
* Demande et valide le choix du joueur 
*/
std::string getPlayerChoice(){

	std::string choice;
	
	while(true){
	
		std::cout<<"Enter your choice ('Pa','Sc', 'Ro'): ";
		std::cin>> choice;
		// Tolower input choice 
		std::transform(choice.begin(), choice.end(), choice.begin(), ::tolower);
	
		if(isValidChoice){
			return convertInputToChoice(choice);
		}
		std::cout << "⚠️ Invalid input! Valid options:\n"
                     	  << "- Rock: Ro/ro/RO/rO\n"
                	  << "- Paper: Pa/pa/PA/pA\n"
               	 	  << "Scissors: Sc/sc/SC/sC\n"
             		  << "Please retry.\n";
	}

}

/*
*Gère le tour du joueur ( affichage des messages, saisie, validation
*/
std::string handlePlayerTurn(){
	std::cout << "\---" <<getPlayerName << "'s Turn ---\n";
	std::cout << " Choose: \n";
	std::cout << " ✊🏿 Rock: 'Ro', 'Ro', 'RO', 'ro'\n ";
	std::cout << " 📄 Paper: 'Pa', 'PA', 'pa', 'pA'\n";
	std::cout << " ✂️ Scissors: 'Sc', 'sc', 'SC', 'Sc' \n";
	
	return getPlayerChoice();	
}

/*
* Affiche un message personnlisé pendant le tour du joueur 
*/
void displayPlayerTurnMessage(const std::string& playerName) {
    	std::cout << "\n===================================\n";
   	std::cout << " 🎮  --- " << getPlayerName << "'s turn "<< std::endl;
    	std::cout << "===================================\n";
}

/*
*Demande au joueur s'il veut continuer après une manche
*/
int askToContinue(){
	int choice;
	while(true){
		std::cout << "\n----------------------------------\n";
		std::cout << " What do you want to do next ?\n";
		std::cout << "1. Continue the game\n";
		std::cout << "2. Go back to main menu\n";
		std::cout << "3. Exit the game\n";
		std::cout << "\n----------------------------------\n";
		std::cout << "Enter yout choice : ";
		
		std::cin >> choice;
		
		// Management of mistakes 
		if(std::cin.fail()){
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'n');
			std::cout << "⚠️ Error : Please enter an integer\n";	
		}
		else if( choice <1 || choice > 3){
			std::cout << " ⚠️ Invalid choice : valid options 1,2 ou 3";
		}
		else {
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			return choice;
		}
	
	}	
}



