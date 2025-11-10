/**
 * File: exercise_5_16_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Perfect Numbers) An integer is said to be a perfect number if the sum of its 
 *                 divisors, including 1 (but not the number itself), is equal to the number. For 
 *                 example, 6 is a perfect number because 6 = 1 + 2 + 3. Write a function isPerfect 
 *                 that determines whether the parameter number is a perfect number. Use this 
 *                 function in a program that determines and prints all the perfect numbers between 
 *                 1 and 1000. Print the divisors of each perfect number to confirm that the number 
 *                 is indeed perfect.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 10-11-2025
 */

#include <iostream>
#include <format>

using namespace std;

// function prototypes
bool isPerfect(int number);
void printDivisors(int number);

int main() {
    cout << "Perfect numbers between 1 and 1000:\n";
    cout << "-----------------------------------\n";

    // counter-controlled interation through the first 1000
    // positive integers in order to find perfetct numbers
    // using the boolean function 'isPerfect()'   
    for (int n = 1; n <= 1000; ++n) {
        if (isPerfect(n)) {
            cout << format("{} = ", n);
            printDivisors(n);
            cout << "\n";
        }
    }

    return 0;
}

// function definitions
// see section 'Exercise 5.16' from ../INSIGHTS_ON_CHAPTER_SOLUTIONS.md 
// for a detailed explanation on the implementation part for the 
// loop-continuation condition of the counter-controlled iterations used 
// in both functions; this is: "Divisors never exceed half of a number 
//                              (except the number itself)"
//─────────────────────────────────────────────────────────────
// check whether 'number' is a perfect number
bool isPerfect(int number) {
    int sum = 0;
    
    for (int divisor = 1; divisor <= number / 2; ++divisor) {
        if (number % divisor == 0)
        sum += divisor;
    }

    return (sum == number);
}

// print all divisors that sum up to the number
void printDivisors(int number) {
    bool first = true;
    
    for (int divisor = 1; divisor <= number / 2; ++divisor) {
        if (number % divisor == 0) {
            if (!first)
            cout << " + ";
            cout << divisor;
            first = false;
        }
    }
    
    cout << format(" = {}", number);
}
//─────────────────────────────────────────────────────────────