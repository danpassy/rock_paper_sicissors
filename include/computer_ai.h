/*
* 		       From Dan Boussougou
* 		          04/04/2025
* 		Header file for Computer logic
*/

#ifndef COMPUTER_AI_H
#define COMPUTER_AI_H

#include <string>
#include <cstdlib> // for random
#include <ctime> // to ensure that avery random choices are diffrents every minutes

/*
* Generate random choice for the computer
* @return "Rock", "Paper" ou "Scissors"
*/
std::string generateComputerChoice();

/*
* Advanced Strategy( for a future implementation)
* Pattern analyse of the player 's game
* @param playerHistory : Historic of player choices
* @return optimize choice against the player
*/
std::string adaptiveAIStrategy(const std::vector<std::string>& playerHistory);

#endif //COMPUTER_H
