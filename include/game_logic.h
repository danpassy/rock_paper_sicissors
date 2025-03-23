#ifndef GAME_LOGIC_H
#define GAME_LOGIC_H

// Compare le choix de l'ordinateur et du joueur pour determiner le gagnant
// retourne "Player", "Computer", "Draw"
std::string determineWinner( const std::string& playerchoice, const stdd::string& compueterchoice);

//vérifie si l'entrée de l'utilisateur est valide
// choix valides:
// pour rock: rock, Rock, RO, ro, R,r
// pour scissors: scissors, Scissors, Sc, S, s
// pour paper: Papar, paper, pa PA p, P 
bool isValidChoice(const stdd::string& choice);

// Convertit une entrée valide de l'utilisateur en un choix standardis ("Rock", "Paper", "Scissors").
std::string consertInputTochoice(const std::string& input);



#endif // GAME_LOGIC_H
