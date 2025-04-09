/*
* From Dan BOUSSOUGOU
* 08/04/2025
* Header file for utility functions
*/

#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <vector>

/**
 * Convertit une chaîne de caractères en minuscules.
 * @param input Chaîne de caractères à convertir.
 * @return Chaîne de caractères convertie en minuscules.
 */
std::string toLowerCase(const std::string& input);

/**
 * Vérifie si une chaîne de caractères est un entier valide.
 * @param str Chaîne de caractères à vérifier.
 * @return true si la chaîne est un entier valide, false sinon.
 */
bool isInteger(const std::string& str);

/**
 * Affiche un vecteur de chaînes de caractères ligne par ligne.
 * @param vec Vecteur de chaînes à afficher.
 */
void printVector(const std::vector<std::string>& vec);

#endif // UTILS_H

