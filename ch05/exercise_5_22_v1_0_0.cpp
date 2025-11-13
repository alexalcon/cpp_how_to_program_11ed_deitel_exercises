/**
 * File: exercise_5_22_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Guess-the-Number Game) Write a program that plays the game of “guess the number” 
 *                 as follows: Your program chooses the number to be guessed by selecting an integer 
 *                 at random in the range 1 to 1000. The program then displays:
 * 
 *                          I have a number between 1 and 1000.
 *                          Can you guess my number?
 *                          Please type your first guess.
 * 
 *                 The player then types a first guess. The program responds with one of the 
 *                 following:
 * 
 *                          1. Excellent! You guessed the number!
 *                             Would you like to play again (y or n)?
 *                          2. Too low. Try again.
 *                          3. Too high. Try again.
 * 
 *                 If the player’s guess is incorrect, your program should loop until the player 
 *                 finally gets the number right. Your program should keep telling the player 
 *                 Too high or Too low to help guide the player “zero in” on the correct answer.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 13-11-2025
 */

#include <iostream>
#include <format>
#include <random>

using namespace std;

int newSecretNumber(); // returns a random integer in [1, 1000]
void playGame();       // controls the guessing loop

int main() {
    char playAgain = 'y';

    // interation condition to continue the game
    while (playAgain == 'y' || playAgain == 'Y') {
        playGame();
        cout << "\nWould you like to play again (y or n)? ";
        cin  >> playAgain;
    }

    cout << "\nThanks for playing!\n";
    return 0;
}

// generates and returns a new random secret number in [1, 1000]
int newSecretNumber() {
    static random_device rd;                  
    static default_random_engine engine{rd()};    
    static uniform_int_distribution dist{1, 1000};

    return dist(engine);
}

// implements the guess loop for a single round of the game
void playGame() {
    int secret = newSecretNumber();

    cout << "\nI have a number between 1 and 1000.\n";
    cout << "Can you guess my number?\n";
    cout << "Please type your first guess.\n\n";

    int guess{};
    cin >> guess;

    // sentinel-controlled loop: continues until guess == secret
    while (guess != secret) {
        if (guess < secret)
            cout << "Too low. Try again.\n";
        else
            cout << "Too high. Try again.\n";

        cin >> guess;
    }

    cout << "\nExcellent! You guessed the number!\n";
}