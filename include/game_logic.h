#ifndef GAME_LOGIC_H
#define GAME_LOGIC_H

#include <string>
// Compare le choix de l'ordinateur et du joueur pour determiner le gagnant
// retourne "Player", "Computer", "Draw"
std::string determineWinner( const std::string& playerChoice, const std::string& computerChoice);

//vérifie si l'entrée de l'utilisateur est valide
// choix valides:
// pour rock: rock, Rock, RO, ro, R,r
// pour scissors: scissors, Scissors, Sc, S, s
// pour paper: Paper, paper, pa PA p, P 
bool isValidChoice(const std::string& choice);

// Convertit une entrée valide de l'utilisateur en un choix standardis ("Rock", "Paper", "Scissors").
std::string convertInputToChoice(const std::string& input);



#endif // GAME_LOGIC_H
