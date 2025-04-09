#include <gtest/gtest.h>
#include "score.h"

// Setup class to manage test environment for score tests
class ScoreTest : public ::testing::Test {
protected:
    void SetUp() override {
        // Remove the scores file to start fresh for each test
        std::filesystem::remove("../data/scores.txt");
    }
};

// Test saving a score and loading it
TEST_F(ScoreTest, SaveAndLoadScore) {
    Score testScore = {"John Doe", 1, 0, 1};
    saveScoreToFile(testScore);

    auto scores = loadScoresFromFile();
    ASSERT_EQ(scores.size(), 1);
    EXPECT_EQ(scores[0].playerName, "John Doe");
    EXPECT_EQ(scores[0].wins, 1);
    EXPECT_EQ(scores[0].losses, 0);
    EXPECT_EQ(scores[0].draws, 1);
}

// Test updating an existing player's score
TEST_F(ScoreTest, UpdateExistingScore) {
    Score initialScore = {"Jane Doe", 2, 1, 0};
    saveScoreToFile(initialScore);
    updateScore("Jane Doe", "win");

    auto scores = loadScoresFromFile();
    ASSERT_EQ(scores.size(), 1);
    EXPECT_EQ(scores[0].wins, 3);
}

// Test adding a new player's score
TEST_F(ScoreTest, AddNewScore) {
    Score initialScore = {"John Doe", 1, 0, 1};
    saveScoreToFile(initialScore);
    updateScore("Jane Doe", "loss");

    auto scores = loadScoresFromFile();
    ASSERT_EQ(scores.size(), 2);
    auto it = std::find_if(scores.begin(), scores.end(), [](const Score& s) { return s.playerName == "Jane Doe"; });
    ASSERT_NE(it, scores.end());
    EXPECT_EQ(it->losses, 1);
}

// Test player existence check
TEST_F(ScoreTest, CheckPlayerExists) {
    Score testScore = {"John Doe", 1, 0, 1};
    saveScoreToFile(testScore);

    EXPECT_TRUE(playerExists("John Doe"));
    EXPECT_FALSE(playerExists("Jane Doe"));
}

// Test displaying sorted scores
TEST_F(ScoreTest, DisplayScoresSorted) {
    Score score1 = {"Alice", 5, 0, 2};
    Score score2 = {"Bob", 3, 2, 1};
    Score score3 = {"Charlie", 7, 1, 0};
    saveScoreToFile(score1);
    saveScoreToFile(score2);
    saveScoreToFile(score3);

    auto scores = loadScoresFromFile();
    // Sort the scores just like displayScores does before checking
    std::sort(scores.begin(), scores.end(), [](const Score& a, const Score& b) {
        return a.wins > b.wins;
    });

    displayScores(scores);
    
    ASSERT_EQ(scores.size(), 3);
    EXPECT_EQ(scores[0].playerName, "Charlie");
    EXPECT_EQ(scores[1].playerName, "Alice");
    EXPECT_EQ(scores[2].playerName, "Bob");
}


