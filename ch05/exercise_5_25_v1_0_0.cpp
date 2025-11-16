/**
 * File: exercise_5_25_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Fibonacci Series: Iterative Solution) Write a nonrecursive version of the 
 *                 function fibonacci from Fig. 5.15.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 16-11-2025
 */

#include <iostream>
#include <format>

using namespace std;

// function prototype
unsigned long long fibonacci(unsigned int n);

int main() {
    // test cases (from 0 to 40) for iterative Fibonacci function
    // ────────────────────────────────────────────────────────────────
    // display program header
    cout << "------------------------------------------\n";
    cout << "  Fibonacci Series - Iterative Solution\n";
    cout << "------------------------------------------\n";
    
    // display table header
    cout << format("{:>5}{:>20}\n", "n", "fibonacci(n)");
    cout << "-----------------------------\n";
    
    // calculate and display first 40 Fibonacci numbers
    for (unsigned int counter{0}; counter <= 40; ++counter) {
        cout << format("{:>5}{:>20}\n", counter, fibonacci(counter));
    }
    // ────────────────────────────────────────────────────────────────

    // interactive section
    // ─────────────────────────────────────────────────────────
    cout << "\n------------------------------------------\n";
    cout << "  Interactive Mode\n";
    cout << "------------------------------------------\n";

    unsigned int n{0};
    cout << "Enter a position in the Fibonacci sequence: ";
    cin >> n;
    
    cout << format("\nfibonacci({}) = {}\n", n, fibonacci(n));
    // ─────────────────────────────────────────────────────────

    return 0;
}

/**
 * Iteratively calculates the nth Fibonacci number.
 * 
 * @param n The position in the Fibonacci sequence (0-indexed)
 * @return The nth Fibonacci number
 * 
 * Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
 * Where: f(0) = 0, f(1) = 1, f(n) = f(n-1) + f(n-2) for n >= 2
 * 
 * This iterative approach is much more efficient than the recursive version,
 * with O(n) time complexity instead of O(2^n).
 */
unsigned long long fibonacci(unsigned int n) {
    // base cases
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    // initialize first two Fibonacci numbers
    unsigned long long previous{0};  // f(n-2)
    unsigned long long current{1};   // f(n-1)
    unsigned long long next{0};      // f(n)

    // iteratively calculate fibonacci(n)
    // start from position 2 and work up to n
    for (unsigned int i{2}; i <= n; ++i) {
        next = previous + current;  // f(n) = f(n-1) + f(n-2)
        previous = current;         // shift: f(n-2) becomes f(n-1)
        current = next;             // shift: f(n-1) becomes f(n)
    }

    return next;
}