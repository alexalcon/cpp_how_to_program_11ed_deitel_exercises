/**
 * File: exercise_5_29_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Recursive Greatest Common Divisor) The greatest common divisor of integers x 
 *                 and y is the largest integer that evenly divides both x and y. Write a recursive 
 *                 function gcd that returns the greatest common divisor of x and y, defined 
 *                 recursively as follows:
 * 
 *                     If y is equal to 0, then gcd(x, y) is x;
 *                     otherwise, gcd(x, y) is gcd(y, x % y),
 * 
 *                 where % is the remainder operator. 
 * 
 *                 [Note: For this algorithm, x must be larger than y.]
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 22-11-2025
 */

#include <iostream>
#include <format>

using namespace std;

// function prototypes
void validateInputs(int& x, int& y); // ensures x, y > 0 (sentinel-controlled)
int gcdRecursive(int x, int y);      // core recursive Euclid algorithm
int gcd(int x, int y);               // wrapper: arranges larger first

int main() {
    int x{}, y{};
    validateInputs(x, y);

    int result = gcd(x, y);

    cout << format("GCD({}, {}) = {}\n", x, y, result);

    return 0;
}

// sentinel-controlled validation: keep asking until both are > 0
void validateInputs(int& x, int&y) {
    cout << "Enter two positive integers (a, b): ";
    cin >> x >> y;

    while (x <= 0 || y <= 0) { // sentinel: invalid (<= 0)
        cout << "Both values must be positive. Try again: ";
        cin >> x >> y; 
    }
}

// recursive Euclid's algorithm 
// ───────────────────────────────────────────────────────────────
// mathematically:
//      base case:           gcd(x, y) = x             if y == 0
//      recursive condition: gcd(x, y) = gcd(y, x%y)   otherwise
// 
// each call corresponds to one step in the division chain:
//      x = y*q + r with r = x % y
// and we recurse on the smaller pair (y, r)  
// ───────────────────────────────────────────────────────────────
// see the project docs Notion website to understand the 
// valid deductive mathematical reasoning of this approach  
// ───────────────────────────────────────────────────────────────
int gcdRecursive(int x, int y) {
    // base (trivial) case: second argument is 0 -> gcd is x
    if (y == 0) {
        return x;
    }

    // recursive step: reduce (x, y) to (y, x % y)
    return gcdRecursive(y, x % y);
}

// wrapper; keeps public interface clean and matches the 
// "x must be larger than y" note from recursion
int gcd(int x, int y) {
    if (x < y) {
        int temp = x;
        x = y;
        y = temp;
    }
    return gcdRecursive(x, y);
}