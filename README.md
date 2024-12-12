# Tic Tac Toe (1D Array Implementation)

A simple command-line implementation of the classic **Tic Tac Toe** game in C++. This version uses a 1D array to represent the board and provides an interactive experience for two players.

---

## Features
- **Two-Player Mode**:
  - Player 1 uses `X`, and Player 2 uses `O`.
- **Interactive Input**:
  - Players select positions by entering numbers (1-9).
  - Validates input and prevents overwriting existing moves.
- **Win Detection**:
  - Checks for winning conditions (rows, columns, diagonals).
- **Tie Detection**:
  - Ends the game if the board is full without a winner.
- **Cross-Platform Screen Clearing**:
  - Uses `system("cls")` for Windows and `system("clear")` for Linux/macOS.

---

## How to Play
1. Run the program in your terminal.
2. The board is displayed with numbers (1-9) indicating positions:
| 1 | 2 | 3 |
| 4 | 5 | 6 |
| 7 | 8 | 9 |
3. Players take turns to input their desired position:
- Example: Enter `5` to place your symbol in the center.
4. The game ends when:
- A player wins by completing a row, column, or diagonal.
- The board is full, resulting in a tie.

---

## Installation and Compilation
### Prerequisites
- A C++ compiler (e.g., GCC, Clang, MSVC).

---

 # Future Enhancements
	•	Implement an AI opponent using the Minimax algorithm.
	•	Add a graphical user interface (GUI).
	•	Support for custom board sizes (e.g., 4x4, 5x5).
	•	Allow players to input custom symbols.

# Credits
Developed by Abdullah Munir 



