#include <gtest/gtest.h>
#include <sstream>
#include "player.h"

class PlayerTest : public ::testing::Test {

protected:
    std::streambuf* originalCin;
    std::streambuf* originalCout;
    std::istringstream inputSimulator;
    std::ostringstream outputSimulator;

    void SetUp() override {
        originalCin = std::cin.rdbuf();
        originalCout = std::cout.rdbuf();
    }

    void TearDown() override {
        std::cin.rdbuf(originalCin);
        std::cout.rdbuf(originalCout);
    }

    void provideInput(const std::string& input) {
        inputSimulator.str(input);
        std::cin.rdbuf(inputSimulator.rdbuf());
    }

    std::string getOutput() {
        std::string output = outputSimulator.str();
        outputSimulator.str(""); // Clear for next use
        return output;
    }

    void captureOutput() {
        std::cout.rdbuf(outputSimulator.rdbuf());
    }
};

TEST_F(PlayerTest, TestGetPlayerName) {
    provideInput("John Doe\n");
    captureOutput();
    ASSERT_EQ(getPlayerName(), "John Doe");
    EXPECT_EQ(getOutput(), "Entrez votre nom : ");
}

TEST_F(PlayerTest, TestGetPlayerChoiceValidInput) {
    provideInput("Ro\n");
    ASSERT_EQ(getPlayerChoice(), "Rock");
}

TEST_F(PlayerTest, TestHandlePlayerTurn) {
    provideInput("John Doe\nRo\n");
    ASSERT_EQ(handlePlayerTurn(), "Rock");
}

TEST_F(PlayerTest, TestAskToContinueValidInput) {
    provideInput("1\n");
    ASSERT_EQ(askToContinue(), 1);
}

TEST_F(PlayerTest, TestAskToContinueInvalidInput) {
    provideInput("invalid\n5\n2\n"); // Invalid, out of range, valid
    ASSERT_EQ(askToContinue(), 2);
}

