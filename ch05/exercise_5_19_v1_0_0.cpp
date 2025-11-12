/**
 * File: exercise_5_19_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Greatest Common Divisor) The greatest common divisor (GCD) of two integers is 
 *                 the largest integer that evenly divides each number. Write a function gcd that 
 *                 returns the greatest common divisor of two integers.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 12-11-2025
 */

#include <iostream>
#include <format>

using namespace std;

// function prototypes
void  validateInputs(int& a, int& b);           // ensures a, b > 0  (sentinel-controlled)
int   euclidAlgorithm(int a, int b, bool show); // prints division chain if show == true
int   gcd(int a, int b);                        // wrapper around Euclid

int main() {
    int a{}, b{};
    validateInputs(a, b);

    cout << "\nEuclid's division chain:\n";
    int gcd = euclidAlgorithm(a, b, /*show=*/true);

    cout << format("\nGCD({}, {}) = {}\n", a, b, gcd);

    return 0;
}

// centinel-controlled validation: keep asking until both are > 0
void validateInputs(int& a, int& b) {
    cout << "Enter two positive integers (a b): ";
    cin  >> a >> b;

    while (a <= 0 || b <= 0) { // sentinel is: "invalid (<= 0)"
        cout << "Both values must be positive. Try again: ";
        cin  >> a >> b;
    }
}

// Euclid's Algorithm 
// ──────────────────────────────────────────────────────────────────────
// see section 'Exercise 5.19' from ../INSIGHTS_ON_CHAPTER_SOLUTIONS.md
// for the mathematical theory backgoround required to understand
// Euclid's Algorithm
// ──────────────────────────────────────────────────────────────────────
// repeats:  a = b*q + r, then (a, b) <- (b, r) until r = 0.
// if show==true, prints each division step: a = b*q + r
int euclidAlgorithm(int a, int b, bool show) {
    // (optional) place the larger number first for a tidy first equation
    if (a < b) { int t = a; a = b; b = t; }

    while (b != 0) {
        int q = a / b;
        int r = a % b;
        if (show) {
            cout << format("{} = {}*{} + {}\n", a, b, q, r);
        }
        a = b;
        b = r;
    }

    // a is the gcd
    return a;
}

// simple wrapper; keeps interface open if swap 
// implementations are implemented later
int gcd(int a, int b) {
    return euclidAlgorithm(a, b, /*show=*/false);
}