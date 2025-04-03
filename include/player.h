/*
* 		From Dan BOUSSOUGOU
* 		   3/04/2025
* 	Header file for player logic game
*/

#ifndef PLAYER_H
#ifndef PLAYER_H

#include <string>

/*
* Demande et valide le choix du joueur 
*/
std::string getPlayerChoice();


/*
*Recupere le nom de l'utilisateur pour une nouvelle partie
*/
std:string getPlayerName();


/*
*Gère le tour du joueur ( affichage des messages, saisie, validation
*/
std::string handlePlayerTurn();

/*
* Affiche un message personnlisé pendant le tour du joueur 
*/
void displayPlayerTurnMessage(const std::string& playerName);

/*
*Demande au joueur s'il veut continuer après une manche
*/
int askToContinue();

#endif //PLAYER_H
