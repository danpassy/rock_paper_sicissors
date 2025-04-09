/*
* 		From Dan BOUSSOUGOU
* 		   3/04/2025
* 	   file for player logic game
*/

#include <iostream>
#include <string>
#include "game_logic.h"
#include "player.h"
#include "utils.h"
#include <algorithm> //( transform())
#include <limits> // std::numeric_limits
#include <sstream>


/*
* Demande et valide le choix du joueur 
*/
std::string getPlayerChoice(){

	std::string choice;
	
	while(true){
	
		std::cout<<"Enter your choice ('Pa','Sc', 'Ro'): ";
		std::cin>> choice;
		// Utilisation de toLowerCase depuis utils.h
        choice = toLowerCase(choice);
	
		if(isValidChoice(choice)){
			return convertInputToChoice(choice);
		}
		std::cout << "⚠️ Invalid input! Valid options:\n"
                     	  << "- Rock: Ro/ro/RO/rO\n"
                	  << "- Paper: Pa/pa/PA/pA\n"
               	 	  << "Scissors: Sc/sc/SC/sC\n"
             		  << "Please retry.\n";
	}

}

/**
* Récupère le nom du joueur pour une nouvelle partie
* @return Nom du joueur saisi
*/
std::string getPlayerName() {
    std::string name;
    while(true) {
        std::cout << "Entrez votre nom : ";
        std::getline(std::cin, name);
        
        // Supprimer les espaces en début/fin
        name.erase(name.find_last_not_of(" \t\n\r\f\v") + 1);
        name.erase(0, name.find_first_not_of(" \t\n\r\f\v"));
        
        if(!name.empty()) {
            return name;
        }
        std::cout << "⚠️ Le nom ne peut pas être vide !\n";
    }
}


/*
*Gère le tour du joueur ( affichage des messages, saisie, validation
*/
std::string handlePlayerTurn(){
	std::cout << "\n---" <<getPlayerName() << "'s Turn ---\n";
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
   	std::cout << " 🎮  --- " << playerName << "'s turn "<< std::endl;
    	std::cout << "===================================\n";
}

/**
* Demande au joueur s'il veut continuer après une manche
* @return Choix de l'utilisateur (1: Continuer, 2: Menu, 3: Quitter)
*/
int askToContinue() {
    int choice;
    while(true) {
        std::cout << "\n----------------------------------\n";
        std::cout << " Que souhaitez-vous faire ?\n";
        std::cout << "1. Continuer la partie\n";
        std::cout << "2. Retour au menu principal\n";
        std::cout << "3. Quitter le jeu\n";
        std::cout << "----------------------------------\n";
        std::cout << "Votre choix : ";
        
        std::string input;
        getline(std::cin, input); // Lecture de toute la ligne

        // Vérification si l'entrée est un entier valide
        if(input.empty() || !std::all_of(input.begin(), input.end(), ::isdigit)) {
            std::cout << "⚠️ Erreur : Veuillez entrer un nombre entier\n";
            continue;
        }

        std::stringstream ss(input);
        ss >> choice;

        // Validation du choix
        if(choice < 1 || choice > 3) {
            std::cout << "⚠️ Choix invalide : options valides 1, 2 ou 3\n";
        } else {
            return choice;
        }
    }
}




