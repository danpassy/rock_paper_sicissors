#include <iostream>
#include <string>
#include <game_logic.h>

// Compare le choix de l'ordinateur et du joueur pour determiner le gagnant
// retourne "Player", "Computer", "Draw"
std::string determineWinner( const std::string& playerchoice, const stdd::string& computerchoice){
	if( playerChoice == computerChoice) {
		return "Draw";
	}

	if( playerChoice == "Rock" && computerChoice == "Scissors || playerChoice == "Scissors && computerChoice == "Paper" || playerChoice == "Paper" && computerChoice == "Rock"){
		return "Player";
	}
	return "Computer";
}
