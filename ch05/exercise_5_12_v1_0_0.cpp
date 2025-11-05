/**
 * File: exercise_5_12_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Separating Digits) Write program segments that accomplish each of the following:
 * 
 *                      a) Calculate the integer part of the quotient when integer a is divided by 
 *                         integer b.
 *                      b) Calculate the integer remainder when integer a is divided by integer b.
 *                      c) Use the program pieces developed in (a) and (b) to write a function that 
 *                         inputs an integer between 1 and 32767 and prints it as a series of 
 *                         digits, each pair separated by two spaces. For example, the integer 
 *                         4562 should print as follows:
 * 
 *                                  4  5  6  2
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 05-11-2025
 */

#include <iostream>
#include <format>

using namespace std;

int quotient(int a, int b);
int remainder(int a, int b);

int main() {
    cout << "quotient() FUNCTION TEST:\n";
    cout << "--------------------------\n";
    cout << format("1) Quotient of: {} / {}: {:>3}\n", 5, 3, quotient(5, 3));
    cout << format("2) Quotient of: {} / {}: {:>3}\n", 17, 4, quotient(17, 4));
    cout << format("3) Quotient of: {} / {}: {:>3}\n", 23, 5, quotient(23, 5));
    cout << format("4) Quotient of: {} / {}: {:>3}\n", 50, 7, quotient(50, 7));
    cout << format("5) Quotient of: {} / {}: {:>3}\n", 19, 8, quotient(19, 8));
    cout << format("6) Quotient of: {} / {}: {:>3}\n", -10, 3, quotient(-10, 3));
    cout << format("7) Quotient of: {} / {}: {:>3}\n", -23, -6, quotient(-23, -6));
    cout << format("8) Quotient of: {} / {}: {:>3}\n", 29, -5, quotient(29, -5));
    cout << "--------------------------\n";
    
    cout << "\nremainder() FUNCTION TEST:\n";
    cout << "--------------------------\n";
    cout << format("1) Remainder of: {} / {}: {:>3}\n", 5, 3, remainder(5, 3));
    cout << format("2) Remainder of: {} / {}: {:>3}\n", 17, 4, remainder(17, 4));
    cout << format("3) Remainder of: {} / {}: {:>3}\n", 23, 5, remainder(23, 5));
    cout << format("4) Remainder of: {} / {}: {:>3}\n", 50, 7, remainder(50, 7));
    cout << format("5) Quotient of: {} / {}: {:>3}\n", 19, 8, remainder(19, 8));
    cout << format("6) Remainder of: {} / {}: {:>3}\n", -10, 3, remainder(-10, 3));
    cout << format("7) Remainder of: {} / {}: {:>3}\n", -23, -6, remainder(-23, -6));
    cout << format("8) Remainder of: {} / {}: {:>3}\n", 29, -5, remainder(29, -5));
    cout << "--------------------------\n";

    return 0;
}

int quotient(int a, int b) {
    // step 1: compute remainder using C++ semantics
    int r = a % b;

    // step 2: adjust remainder to always be nonnegative
    // see 'Important Note' from ./INSIGHTS_ON_CHAPTER_SOLUTIONS.md
    // in section Exercise 5.12
    if (r < 0) {
        if (b > 0)
            r += b;
        else
            r -= b;
    }

    // step 3: compute quotient using the mathematical formula
    // see equation (1) from ./INSIGHTS_ON_CHAPTER_SOLUTIONS.md, 
    // in section 'Exercise 5.12'
    return (a - r) / b;

}

int remainder(int a, int b) {
    return ( a - b*(quotient(a, b)) ); // see equation (2) from ./INSIGHTS_ON_CHAPTER_SOLUTIONS.md, 
                                       // in section 'Exercise 5.12'
}