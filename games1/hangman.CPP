#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <iomanip> // for setw()

using namespace std;
#define RESET         "\033[0m"
#define BLACK         "\033[30m"
#define RED           "\033[31m"
#define GREEN         "\033[32m"
#define YELLOW        "\033[33m"
#define BLUE          "\033[34m"
#define MAGENTA       "\033[35m"
#define CYAN          "\033[36m"
#define WHITE         "\033[37m"
#define BOLD_BLACK    "\033[1m\033[30m"
#define BOLD_RED      "\033[1m\033[31m"
#define BOLD_GREEN    "\033[1m\033[32m"
#define BOLD_YELLOW   "\033[1m\033[33m"
#define BOLD_BLUE     "\033[1m\033[34m"
#define BOLD_MAGENTA  "\033[1m\033[35m"
#define BOLD_CYAN     "\033[1m\033[36m"
#define BOLD_WHITE    "\033[1m\033[37m"
class HangmanGame {
private:
    string words[6]= {"HELLO", "WORLD", "COMPUTER", "PROGRAMMING", "PYTHON", "CPLUSPLUS"};// Store words for the game
    string currentWord; // The word the player has to guess
    string guessedWord; // The word showing guessed letters
    int maxAttempts; // Maximum number of attempts allowed
    int remainingAttempts; // Number of attempts remaining
    string guessedLetters; // Letters already guessed by the player
    int score;

public:
    HangmanGame() : maxAttempts(7), remainingAttempts(maxAttempts), score(0){}
        // Add some words to the word ban}


    void startGame() {
        srand(time(0)); // Seed for random number generation
        currentWord = words[rand() % 6]; // Select a random word from the bank
        guessedWord = string(currentWord.length(), '_'); // Initialize guessed word with underscores
        guessedLetters.clear(); // Clear guessed letters
        remainingAttempts = maxAttempts; // Reset remaining attempts
    }

    void displayHangman() {
        int incorrectGuesses = maxAttempts - remainingAttempts;
  #include <iostream>

    // ASCII art for "HANGMAN GAME"
    system("cls");
    cout <<BLUE<<"\t\t\t\t  _    _                                         " << endl;
    cout <<       "\t\t\t\t | |  | |                                        " <<  endl;
    cout <<       "\t\t\t\t | || | __ _ _ __   __ _ _ __ ___   __ _ _ __ " <<  endl;
    cout <<       "\t\t\t\t |  __  |/ ` | ' \\ / ` | ' ` _ \\ / ` | ' \\" <<  endl;
    cout <<       "\t\t\t\t | |  | | (| | | | | (| | | | | | | (_| | | | |" <<  endl;
    cout <<       "\t\t\t\t ||  ||\\,|| ||\\, || || ||\\,|| |_|" <<  endl;
    cout <<       "\t\t\t\t                      __/ |                      " <<  endl;
    cout <<       "\t\t\t\t                     |_/                       " << RESET<<endl << endl;
cout<<endl;
cout<<endl;
    // ASCII art for hangman figure
    cout <<YELLOW<< "\t\t\t\t\t\t\t +----+" << endl;
    cout <<          "\t\t\t\t\t\t\t |    |" << endl;
    cout <<          "\t\t\t\t\t\t\t O    |" << endl;
    cout <<          "\t\t\t\t\t\t\t /|\\  |" << endl;
    cout <<          "\t\t\t\t\t\t\t / \\  |" << endl;
    cout <<          "\t\t\t\t\t\t\t      |" << endl;
    cout <<          "\t\t\t\t\t\t\t=========" <<RESET<< endl;
    cin.get();
system("cls");
        cout <<CYAN<< "Attempts Left: " << remainingAttempts <<RESET<< endl << endl;

        // Visual representation of the hangman
        cout <<YELLOW<< "  +---+" << endl;
        cout <<          "  |   |" << endl;
        cout <<          "  " << (incorrectGuesses >= 1 ? "O" : " ") << "   |" << endl;
        cout <<          " " << (incorrectGuesses >= 3 ? "/" : " ") << (incorrectGuesses >= 2 ? "|" : " ") << (incorrectGuesses >= 4 ? "\\" : " ") << "  |" << endl;
        cout <<          " " << (incorrectGuesses >= 5 ? "/" : " ") << " " << (incorrectGuesses >= 6 ? "\\" : " ") << "  |" << endl;
        cout <<          "      |" << endl;
        cout <<          "=========" <<RESET<< endl << endl;

        cout <<MAGENTA<< "Guessed Word: " << setw(currentWord.length()) << guessedWord << endl;
        cout <<MAGENTA<< "Guessed Letters: " << guessedLetters << endl <<RESET<< endl;
    }

    void guessLetter(char letter) {
        bool found = false;
        for (int i = 0; i < currentWord.length(); ++i) {
            if (currentWord[i] == letter) {
                guessedWord[i] = letter;
                found = true;
            }
        }

        if (!found) {
            remainingAttempts--;
        }

        guessedLetters += letter;
    }

    bool isGameOver() {
        if (remainingAttempts <= 0) {
                cout<<endl;
            cout << "You lose! The word was: " << currentWord << endl;
            return true;
        } else if (guessedWord == currentWord) {
            cout<<endl;
            cout << "Congratulations! You guessed the word: " << currentWord << endl;
            score += 10; // Increment score by 10 for each correct guess
            return true;
        }
        return false;
    }

    int getScore() const {
        return score;
    }
};

int main() {
    HangmanGame game;
    char guess;
    bool gameOver = false;

    do {
        game.startGame();
        cout <<GREEN<< "Welcome to Hangman! Try to guess the word." << endl;
        while (!gameOver) {
            game.displayHangman();
            cout <<GREEN<< "Enter your guess (a single letter): ";
            cin >> guess;
            game.guessLetter(toupper(guess));
            gameOver = game.isGameOver();
        }

        cout << "Your score: " << game.getScore() <<RESET<< endl;
        cout<<endl;
        cout << "Do you want to play again? (y/n): ";
        char playAgain;
        cin >> playAgain;
        gameOver = (playAgain != 'y' && playAgain != 'Y');

    } while (!gameOver);
cout<<endl;
    cout <<BOLD_CYAN<< "THANKS FOR PLAYING HANGMAN!" <<RESET<< endl;

    return 0;
}