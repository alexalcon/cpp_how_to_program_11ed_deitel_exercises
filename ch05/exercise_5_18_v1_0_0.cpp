/**
 * File: exercise_5_18_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Reverse Digits) Write a function that takes an integer value and returns the 
 *                 number with its digits reversed. For example, given the number 7631, the 
 *                 function should return 1367.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 12-11-2025
 */

#include <iostream>
#include <format>

using namespace std;

// function prototype
int reverseDigits(int number);

int main() {
    int n{};
    cout << "Enter an integer to reverse: ";
    cin >> n;

    cout << format("Reversed number: {}\n", reverseDigits(n));
    
    return 0;
}

// function definition
int reverseDigits(int number) {
    int reversed = 0;

    // handle negative numbers correctly (optional extension)
    bool isNegative = (number < 0);
    if (isNegative)
        number = -number;

    // extract and rebuild digits in reverse order
    while (number != 0) {
        int digit = number % 10;          // get last digit
        reversed = reversed * 10 + digit; // shift and add new digit
        number /= 10;                     // remove last digit
    }

    // restore sign if necessary
    if (isNegative)
        reversed = -reversed;

    return reversed;
}