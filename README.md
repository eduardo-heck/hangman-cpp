# Hangman (C++)

A console hangman game written in C++, built while following the C++ learning path on [Alura](https://www.alura.com.br/). The secret word is picked at random from a text file, and you lose after 5 wrong guesses.

## Features

- Random secret word chosen from `palavras.txt`
- Letters are revealed as you guess them
- Wrong guesses are tracked and displayed
- Game ends after 5 wrong guesses or when the word is complete
- Words are stored in a plain text file, so the list is easy to edit

## How to run

**Requirements:** Windows and [Visual Studio](https://visualstudio.microsoft.com/) with the "Desktop development with C++" workload.

1. Clone the repository:
   ```
   git clone https://github.com/eduardo-heck/hangman-cpp.git
   ```
2. Open `JogoForca.slnx` in Visual Studio.
3. Select **Debug** and **x64**, then press **F5**.

The game reads `palavras.txt` from the working directory, so run it from Visual Studio so the file is found.

## Word list format

`palavras.txt` starts with the number of words, followed by one word per line, in uppercase:

```
6
ABACAXI
BANANA
UVA
MELANCIA
MORANGO
LARANJA
```

## Project structure

The code is split into small modules, each with its own `.hpp` and `.cpp`:

| Module | Responsibility |
| --- | --- |
| `forca.cpp` | Entry point and main game loop |
| `imprime_cabecalho` | Prints the game header |
| `le_arquivo` | Reads the word list from file |
| `sorteia_palavra` | Picks a random word |
| `chuta` | Handles the player's guess |
| `letra_existe` | Checks if a letter is in the secret word |
| `imprime_palavra` | Prints the word with the revealed letters |
| `imprime_erros` | Prints the wrong guesses |
| `nao_acertou` | Checks if the word has not been fully guessed yet |
| `adiciona_palavra` | Adds a new word to the list |
| `salva_arquivo` | Saves the word list to file |

## What I practiced

- Splitting a program into multiple files with header files
- `std::string`, `std::map` and `std::array`
- Reading and writing text files
- Building and running a project with Visual Studio

## Author

Eduardo Müller Heck — [GitHub](https://github.com/eduardo-heck) · [LinkedIn](https://www.linkedin.com/in/eduardo-m%C3%BCller-heck-496287345/)
