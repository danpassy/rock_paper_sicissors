/*
* 		       From Dan Boussougou
* 		          04/04/2025
* 		     file for Computer logic
*/
#include "computer_ai.h"


/*
* Generate random choice for the computer
* @return "Rock", "Paper" ou "Scissors"
*/
std::string generatecomputerChoice(){
	srand(time(0));
	int random = rand() % 3;
	switch(random) {
		case 0: return "Rock";
		case 1: return "Paper"
		default: return "Scissors"
	}

}
