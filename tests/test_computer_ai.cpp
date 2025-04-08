#include <gtest/gtest.h>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include "computer_ai.h"

class ComputerAITest : public ::testing::Test {
protected:
    void SetUp() override {
        srand(static_cast<unsigned>(time(0))); // Seed RNG once before tests
    }
};
/*
* teste pour verifier que chaque elment de des troix choix possibles rock, papaer, scissors sont bien valides par  generateComputerChoice
*/
// Test 1: Verification of valid return values
TEST_F(ComputerAITest, ReturnsValidChoices) {
    const std::vector<std::string> valid = {"Rock", "Paper", "Scissors"};
    
    for (int i = 0; i < 100; ++i) {
        std::string result = generateComputerChoice();
        ASSERT_FALSE(result.empty());
        EXPECT_TRUE(std::find(valid.begin(), valid.end(), result) != valid.end());
    }
}

/*
*
*/

// Test 2: Verification of result distribution
TEST_F(ComputerAITest, AllChoicesAppear) {
    std::unordered_map<std::string, int> counts;
    const int iterations = 1000;

    for (int i = 0; i < iterations; ++i) {
        std::string choice = generateComputerChoice();
        ++counts[choice];
    }

    EXPECT_EQ(counts.size(), 3); // Ensure all three choices appear
    EXPECT_GT(counts["Rock"], iterations * 0.2); // At least 20%
    EXPECT_GT(counts["Paper"], iterations * 0.2);
    EXPECT_GT(counts["Scissors"], iterations * 0.2);
}

// Test 3: Verification of no fixed pattern
TEST_F(ComputerAITest, NoFixedPattern) {
    const int iterations = 1000;
    std::vector<std::string> choices;
    choices.reserve(iterations);

    for (int i = 0; i < iterations; ++i) {
        choices.push_back(generateComputerChoice());
    }

    // Calcul des répétitions consécutives
    int repeats = 0;
    for (size_t i = 1; i < choices.size(); ++i) {
        if (choices[i] == choices[i-1]) repeats++;
    }

    // Nouveaux seuils basés sur la distribution binomiale
    const double expected_mean = (iterations - 1) * (1.0/3.0); // ≈333
    const double margin = 50; // ±5% 

    EXPECT_GT(repeats, expected_mean - margin); // >283
    EXPECT_LT(repeats, expected_mean + margin); // <383
}

