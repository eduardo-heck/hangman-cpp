# Hangman in C++

A classic Hangman word-guessing game developed in C++ as part of my programming studies at Alura.

## About the Project

The objective is to guess a secret word by entering one letter at a time. The game selects a random word from a text file and gives the player up to five incorrect guesses before the game ends.

If the player wins, they can choose to add a new word to the word bank.

## Features

- Random word selection from an external text file.
- Letter-by-letter guessing.
- Display of correctly guessed letters and incorrect guesses.
- Five-incorrect-guess limit.
- Option to add new words to the word bank after winning.
- Persistent word storage using file handling.

## Technologies

- C++
- C++ Standard Library
- File handling (`ifstream` and `ofstream`)
- Random number generation

## Project Structure

```text
hangman-cpp/
├── forca.cpp
├── palavras.txt
├── Makefile
└── README.md
```

## How to Run

### Prerequisites

- A C++ compiler, such as `g++`.
- A terminal or command-line environment.

### 1. Clone the repository

```bash
git clone https://github.com/eduardo-heck/hangman-cpp.git
cd hangman-cpp
```

### 2. Compile the program

Using `g++`:

```bash
g++ -std=c++11 forca.cpp -o hangman
```

### 3. Run the game

On Windows:

```powershell
.\hangman.exe
```

On Linux or macOS:

```bash
./hangman
```

**Important:** Run the program from the project directory so it can access `palavras.txt`.

## What I Learned

- Working with vectors and maps in C++.
- Using functions to organize program logic.
- Reading and writing files.
- Generating random selections.
- Managing user input and game conditions.

---

Developed by [Eduardo Heck](https://github.com/eduardo-heck).