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


//vérifie si l'entrée de l'utilisateur est valide
// choix valides:
// pour rock: rock, Rock, RO, ro, R,r
// pour scissors: scissors, Scissors, Sc, S, s
// pour paper: Papar, paper, pa PA p, P
bool isValidChoice(const stdd::string& choice){
	return( choice == "Rock" || choice == "rock" choice == "ro" || choice == "RO" || choice == "Ro" ||choice == "r" || choice == "R" || choice == "Paper" || choice == "paper" || choice == "pa" choice == "Pa" || choice == "PA" || choice == "P" || choice == "p" || choice == "Scissors" || choice == "scissors" || choice ==  "Sc" || choice == "SC" choice == "S" || choice == "s") 
}


//Convertit une entrée utilisateur en un choix standardisé ("Rock", "Paper", ou "Scissors").
std::string convertInputTochoice(const std::string& input){
	if(input == "Paper" || input == "paper" || input == "PA" || input == "pa" || input == "Pa" ||  input == "P" || input == "p"){
		return "Paper";
	}
	if(input == "Rock" || input == "rock" || input == "RO" || input == "Ro" || input == "ro" || input == "R" || input == "r"){
		return "Rock";
	}
	if(input == "Scissors" || input == "scissors" || input == "SC" || input == "sc" || input == "S" || input == "s"){
		return "Scissors";
	}
	return ""; // retourne une chaine vide si l'entrée est invalide.
}
