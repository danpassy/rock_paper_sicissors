#include <iostream>
#include <fstream>
#include <vector>
#include <filesystem>
#include "score.h"
#include <sstream>


const std::string SCORE_FILE = "../data/scores.txt";

/**
 * Sauvegarde un score dans le fichier scores.txt
 * @param score Structure Score à sauvegarder
 */
void saveScoreToFile(const Score& score) {

    std::filesystem::create_directories(std::filesystem::path(SCORE_FILE).parent_path());
    
    std::ofstream file(SCORE_FILE, std::ios::app); // Écriture en fin du fichier
    
    if (file.is_open()) {
    
        file << score.playerName << ";"
             << score.wins << ";"
             << score.losses << ";"
             << score.draws << "\n";
             
        file.close();
        
    } else {
        std::cerr << "Erreur: impossible d'écrire dans " << SCORE_FILE << std::endl;
    }
}


/**
 * Charge tous les scores depuis le fichier
 * @return Vecteur des scores existants
 */
std::vector<Score> loadScoresFromFile() {

    std::vector<Score> scores;
    std::ifstream file(SCORE_FILE);
    
    if (file.is_open()) {
    
        std::string line;
        
        while (getline(file, line)) {
        
            std::stringstream ss(line);
            Score s;
            
            getline(ss, s.playerName, ';');
            ss >> s.wins; ss.ignore();
            ss >> s.losses; ss.ignore();
            ss >> s.draws; ss.ignore();
            scores.push_back(s);
        }
        
        file.close();
    } else {
        std::cerr << "Erreur: impossible de lire le fichier " << SCORE_FILE << std::endl;
    }
    return scores;
}

/**
 * Vérifie l'existence d'un joueur dans les scores
 * @param playerName Nom à vérifier
 * @return true si le joueur existe déjà
 */
bool playerExists(const std::string& playerName){

	auto scores = loadScoresFromFile();
	for( const auto& score: scores){
		if(score.playerName == playerName)
		return true;
	}
	
	return false;
}

/**
 * Met à jour le score d'un joueur
 * @param playerName Nom du joueur
 * @param result Résultat ("win", "loss", "draw")
 */
void updateScore(const std::string& playerName, const std::string& result) {

	auto scores = loadScoresFromFile();
	bool found = false;
	
	std::ofstream file(SCORE_FILE);
	
	for (auto& score: scores) {
		if(score.playerName == playerName){ 
			found = true; 
			if (result == "win") 
				{ score.wins++; }
			else if (result == "loss") {
				score.losses++; 
			}else if (result == "draw") {
				score.draws++;
			}
			break;
		}
	}
	// si le joueur n'existe pas, on l'ajoute à un nouveau score
	if(!found){
		Score newScore{playerName, 0, 0, 0};
		if(result == "win") {
			newScore.wins = 1;
		}else if (result == "loss"){
		newScore.losses = 1;
		}else if( result == "draw"){
			newScore.draws = 1;
		}
		scores.push_back(newScore);
	}
	
	// Reecriutre du fichier avec le nouveau scores.
	if(file.is_open()){
		for (const auto& score : scores) {
		    file << score.playerName << ";"
		         << score.wins << ";"
		         << score.losses << ";"
		         << score.draws << "\n";
        	}
        	file.close();
	} else {
        std::cerr << "Erreur: impossible de mettre à jour le fichier " << SCORE_FILE << std::endl;
    }
}

/**
 * Affiche le classement des scores triés par victoires
 * @param scores Vecteur des scores à afficher
 */
void displayScores(const std::vector<Score>& scores) {
    auto sortedScores = scores;

    // Tri des scores par nombre de victoires décroissant.
    std::sort(sortedScores.begin(), sortedScores.end(), [](const Score& a, const Score& b) {
        return a.wins > b.wins;
    });

    std::cout << "Classement des joueurs:\n";
    for (const auto& score : sortedScores) {
        std::cout << "Joueur: " << score.playerName 
                  << ", Victoires: " << score.wins 
                  << ", Défaites: " << score.losses 
                  << ", Nuls: " << score.draws 
                  << "\n";
    }
}
