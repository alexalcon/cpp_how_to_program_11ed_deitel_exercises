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

int quotient(int a, int b);  // part a) function prototype
int remainder(int a, int b); // part b) function prototype

// part c)
void printDigitsSpaced(int n) {
    // start from the largest place value ≤ 32767 (i.e., 10000)
    int d = 10000;
    bool started = false;

    while (d > 0) {
        int q = quotient(n, d);     // current most-significant digit
        if (started || q != 0 || d == 1) {
            cout << q;
            if (d != 1) cout << "  ";
            started = true;
        }
        n = remainder(n, d);        // drop the digit we just printed
        d = quotient(d, 10);        // move to next place value (divide by 10)
    }
    cout << '\n';
}

int main() {
    int n;

    cout << "Enter an integer in [1, 32767]: ";
    cin >> n;
    // sentinel-controlled validation
    while (n < 1 || n > 32767) {
        cout << "Out of range. Enter an integer in [1, 32767]: ";
        cin >> n;
    }

    printDigitsSpaced(n);

    return 0;
}

// helpers from parts (a) and (b) 
//──────────────────────────────────────────────────────────────────────────────────────────────────
// part a)
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

// part b)
int remainder(int a, int b) {
    return ( a - b*(quotient(a, b)) ); // see equation (2) from ./INSIGHTS_ON_CHAPTER_SOLUTIONS.md, 
                                       // in section 'Exercise 5.12'
}
//──────────────────────────────────────────────────────────────────────────────────────────────────