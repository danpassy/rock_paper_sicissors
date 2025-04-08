/*
* 	  From Dan Boussougou
* 	       04/04/2025
* 	File for Computer logic
*/

#include "computer_ai.h"
#include <cstdlib>
#include <ctime>

/*
* Generate random choice for the computer
* @return "Rock", "Paper" ou "Scissors"
*/
#include <random>

std::string generateComputerChoice() {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    static std::uniform_int_distribution<> dist(0, 2);
    
    switch(dist(gen)) {
        case 0: return "Rock";
        case 1: return "Paper";
        default: return "Scissors";
    }
}


/*
* Advanced Strategy (for future implementation)
* Pattern analysis of player's game
* @param playerHistory : Historic of player choices
* @return optimized choice against player
*/
std::string adaptiveAIStrategy(const std::vector<std::string>& playerHistory) {
    // Implementation future
    return "Rock"; // Temporaire
}

