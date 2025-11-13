/**
 * File: exercise_5_21_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Coin Tossing) Write a program that simulates coin tossing. For each coin toss, 
 *                 the program should print Heads or Tails. Let the program toss the coin 100 times 
 *                 and count the number of times each side of the coin appears. Print the results. 
 *                 The program should call a separate function flip that takes no arguments and 
 *                 returns 0 for tails and 1 for heads.
 * 
 *                 [Note: If the program realistically simulates coin tossing, then each side of 
 *                 the coin should appear approximately half the time.]
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 13-11-2025
 */

#include <iostream>
#include <format>
#include <random> // contains random-number generation features 

using namespace std;

// function prototype
int flip(); // returns 0 (tails) or 1 (heads)

int main() {
    int headsCount = 0;
    int tailsCount = 0;

    cout << "Simulating 100 coin tosses:\n";
    cout << "---------------------------\n";
    
    // counter-controlled iteration
    // loop exactly 100 times
    for (int toss = 1 ; toss <= 100 ; ++toss) {
        int result = flip();

        if (result == 1) {
            cout << format("{:>3}) Heads\n", toss);
            ++headsCount;
        } else {
            cout << format("{:>3}) Tails\n", toss);
            ++tailsCount;
        }
    }

    cout << "---------------------------\n";
    cout << format("Total Heads: {:>3}\n", headsCount);
    cout << format("Total Tails: {:>3}\n", tailsCount);

    return 0;
}

// function definition
int flip() {
    // static random engine and distribution — seeded once
    static random_device rd;
    static default_random_engine engine{rd()};
    static uniform_int_distribution coin{0, 1};

    return coin(engine); // 0 → Tails, 1 → Heads
}