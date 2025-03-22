# 🎮 Rock-Paper-Scissors Game

A user-friendly and interactive console-based implementation of the classic Rock-Paper-Scissors game, featuring clear instructions, score tracking, and player management.

---

## 🚀 Features

- **Interactive Main Menu:** Navigate easily between different functionalities.
- **Score Persistence:** Automatically saves and retrieves your last game.
- **User Management:** Register new users, view registered users, and delete existing ones.
- **Clear Instructions:** Straightforward prompts and error handling for seamless gameplay.

---

## 📌 Menu Overview

Upon launching the application, you will encounter the main menu:

```
===========================================
Welcome to the Rock-Paper-Scissors Game!
===========================================

1. Continue the previous game
2. Start a new game
3. View registered users
4. Delete an existing user
5. View game rules
6. Exit the game

Enter your choice (1 to 6):
> _
```

---

## ▶️ Gameplay Flow

### 🔄 Continue Previous Game

- **No previous game exists:**
  ```
  There’s no last game yet, do you want to start a game?
  1. Yes
  2. No (go back to main menu)
  3. Exit the game
  ```

- **If previous game exists:**
  ```
  -----------------------------------
  Last played round:
  You chose: 📄 Paper
  The computer chose: ✂️ Scissors

  ❌ The computer wins this round!
  Score: Computer 4 - 2 [Player Name]
  -----------------------------------
  ```

- **Next Turn:**
  - Player's Turn:
    ```
    It's your turn!
    Please enter your choice:
      - "Pi", "PI", "pi", "pI" for ✊ Rock
      - "Pa", "PA", "pa", "pA" for 📄 Paper
      - "C" or "c" for ✂️ Scissors

    Your choice:
    > _
    ```

  - Computer’s Turn:
    ```
    The computer is playing...
    ```

- **Invalid Input:**
  ```
  ⚠️ Invalid choice! Please try again.
  ```

### 🛠️ Score Update Example

```
You chose: 📄 Paper
The computer chose: ✂️ Scissors

❌ The computer wins this round!
Score: Computer 5 - 2 [Player Name]
```

- **Post-Round Options:**
  ```
  What would you like to do next?
  1. Continue this game
  2. Return to the main menu
  3. Exit the game

  Your choice:
  > _
  ```

### ✨ Start a New Game

- **Register Username:**
  ```
  Please enter your username:
  > _
  ```

- **Choose First Player:**
  ```
  Who should play first?
  1. [Player Name]
  2. Computer

  Enter your choice (1 or 2):
  > _
  ```

  **Invalid Input:**
  ```
  ⚠️ Invalid choice! Please enter "1" or "2".
  ```

- **Gameplay:**
  - Player's Input:
    ```
    It's your turn!
    Please enter your choice:
      - "Pi", "PI", "pi", "pI" for ✊ Rock
      - "Pa", "PA", "pa", "pA" for 📄 Paper
      - "C" or "c" for ✂️ Scissors

    Your choice:
    > _
    ```

  - Computer's Input:
    ```
    The computer is playing...
    ```

### 🏆 Round Result Example

```
-------------------------------------------------
You chose: 📄 Paper
The computer chose: ✂️ Scissors

❌ The computer wins this round!
Score: Computer 1 - 0 [Player Name]
-------------------------------------------------
```

- Scores are saved automatically.

---

## 📖 Rules Overview

Simple and familiar rules:

- **✊ Rock beats ✂️ Scissors**
- **✂️ Scissors beats 📄 Paper**
- **📄 Paper beats ✊ Rock**

---

## 💻 Requirements

- Python 3.x
- Terminal or command-line interface

---

## 🛠️ Installation

Clone this repository and run the game:

```sh
git clone <repo-link>
cd rock-paper-scissors
python main.py
```

---

## 👨‍💻 Authors

- Dan Boussougou

---

Enjoy the game! 🚀


