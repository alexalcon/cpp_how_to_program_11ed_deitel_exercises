/**
 * File: exercise_5_23_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Guess-the-Number Game Modification) Modify the program of Exercise 5.22 to 
 *                 count the number of guesses the player makes. If the number is 10 or fewer, 
 *                 print "Either you know the secret or you got lucky!" If the player guesses the 
 *                 number in 10 tries, print "Ahah! You know the secret!" If the player makes more 
 *                 than 10 guesses, print "You should be able to do better!" 
 * 
 *                 Why should it take no more than 10 guesses? Well, with each “good guess,” the 
 *                 player should be able to eliminate half of the numbers. Now show why any number 
 *                 from 1 to 1000 can be guessed in 10 or fewer tries.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 13-11-2025
 */

#include <iostream>
#include <format>
#include <random>

using namespace std;

// function prototypes
int  newSecretNumber(); // returns a random integer in [1, 1000]
int  playGame();        // plays one round and returns number of guesses

int main() {
    char playAgain = 'y';

    while (playAgain == 'y' || playAgain == 'Y') {
        int attempts = playGame();

        cout << format("\nYou needed {} guess(es).\n", attempts);

        if (attempts < 10) {
            cout << "Either you know the secret or you got lucky!\n";
        } else if (attempts == 10) {
            cout << "Ahah! You know the secret!\n";
        } else {
            cout << "You should be able to do better!\n";
        }

        cout << "\nWould you like to play again (y or n)? ";
        cin  >> playAgain;
        cout << '\n';
    }

    cout << "Thanks for playing!\n";
    return 0;
}

// generates and returns a new random secret number in [1, 1000]
int newSecretNumber() {
    static random_device rd;
    static default_random_engine engine{rd()};
    static uniform_int_distribution<int> dist(1, 1000);

    return dist(engine);
}

// plays one round of the game; returns the number of guesses used
int playGame() {
    int secret = newSecretNumber();

    cout << "I have a number between 1 and 1000.\n";
    cout << "Can you guess my number?\n";
    cout << "Please type your first guess.\n\n";

    int guess{};
    int attempts = 0;

    cin >> guess;
    ++attempts;

    // sentinel-controlled loop: repeat until guess == secret
    while (guess != secret) {
        if (guess < secret) {
            cout << "Too low. Try again.\n";
        } else {
            cout << "Too high. Try again.\n";
        }

        cin >> guess;
        ++attempts;
    }

    cout << "\nExcellent! You guessed the number!\n";
    
    return attempts;
}