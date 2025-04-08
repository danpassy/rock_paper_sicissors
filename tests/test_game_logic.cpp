#include <gtest/gtest.h>
#include "game_logic.h"

// Test 1: Vérification de la fonction determineWinner
TEST(GameLogicTest, DetermineWinner) {
    // Cas où le joueur gagne
    EXPECT_EQ(determineWinner("Rock", "Scissors"), "Player");
    EXPECT_EQ(determineWinner("Paper", "Rock"), "Player");
    EXPECT_EQ(determineWinner("Scissors", "Paper"), "Player");

    // Cas où l'ordinateur gagne
    EXPECT_EQ(determineWinner("Rock", "Paper"), "Computer");
    EXPECT_EQ(determineWinner("Paper", "Scissors"), "Computer");
    EXPECT_EQ(determineWinner("Scissors", "Rock"), "Computer");

    // Cas d'égalité
    EXPECT_EQ(determineWinner("Rock", "Rock"), "Draw");
    EXPECT_EQ(determineWinner("Paper", "Paper"), "Draw");
    EXPECT_EQ(determineWinner("Scissors", "Scissors"), "Draw");
}

// Test 2: Vérification de la fonction isValidChoice
TEST(GameLogicTest, IsValidChoice) {
    // Entrées valides pour chaque choix
    EXPECT_TRUE(isValidChoice("Rock"));
    EXPECT_TRUE(isValidChoice("rock"));
    EXPECT_TRUE(isValidChoice("RO"));
    EXPECT_TRUE(isValidChoice("r"));
    EXPECT_TRUE(isValidChoice("Paper"));
    EXPECT_TRUE(isValidChoice("pa"));
    EXPECT_TRUE(isValidChoice("P"));
    EXPECT_TRUE(isValidChoice("Scissors"));
    EXPECT_TRUE(isValidChoice("sc"));
    EXPECT_TRUE(isValidChoice("s"));

    // Entrées invalides
    EXPECT_FALSE(isValidChoice(""));
    EXPECT_FALSE(isValidChoice("Invalid"));
    EXPECT_FALSE(isValidChoice("123"));
}

// Test 3: Vérification de la fonction convertInputToChoice
TEST(GameLogicTest, ConvertInputToChoice) {
    // Conversion correcte des entrées valides
    EXPECT_EQ(convertInputToChoice("Rock"), "Rock");
    EXPECT_EQ(convertInputToChoice("rock"), "Rock");
    EXPECT_EQ(convertInputToChoice("RO"), "Rock");
    EXPECT_EQ(convertInputToChoice("r"), "Rock");

    EXPECT_EQ(convertInputToChoice("Paper"), "Paper");
    EXPECT_EQ(convertInputToChoice("pa"), "Paper");
    EXPECT_EQ(convertInputToChoice("P"), "Paper");

    EXPECT_EQ(convertInputToChoice("Scissors"), "Scissors");
    EXPECT_EQ(convertInputToChoice("sc"), "Scissors");
    EXPECT_EQ(convertInputToChoice("s"), "Scissors");

    // Conversion des entrées invalides (doit retourner une chaîne vide)
    EXPECT_EQ(convertInputToChoice("Invalid"), "");
    EXPECT_EQ(convertInputToChoice("123"), "");
}

