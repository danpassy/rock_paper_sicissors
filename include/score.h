/*
*          from Dan Boussougou
*          08/04/2025 at 12H40
*       file for scores management 
*/
#ifndef SCORE_H
#define SCORE_H

#include <string>
#include <vector>
#include <fstream>

/**
 * Structure de stockage des scores
 */
struct Score {
    std::string playerName;
    int wins;
    int losses;
    int draws;
};

/**
 * Sauvegarde un score dans le fichier scores.txt
 * @param score Structure Score à sauvegarder
 */
void saveScoreToFile(const Score& score);

/**
 * Charge tous les scores depuis le fichier
 * @return Vecteur des scores existants
 */
std::vector<Score> loadScoresFromFile();

/**
 * Met à jour le score d'un joueur
 * @param playerName Nom du joueur
 * @param result Résultat ("win", "loss", "draw")
 */
void updateScore(const std::string& playerName, const std::string& result);

/**
 * Affiche le classement des scores triés par victoires
 * @param scores Vecteur des scores à afficher
 */
void displayScores(const std::vector<Score>& scores);

/**
 * Vérifie l'existence d'un joueur dans les scores
 * @param playerName Nom à vérifier
 * @return true si le joueur existe déjà
 */
bool playerExists(const std::string& playerName);

#endif // SCORE_H



