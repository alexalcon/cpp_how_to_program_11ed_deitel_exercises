/**
 * File: exercise_5_24_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Recursive Exponentiation) Write a recursive function power(base, exponent) 
 *                 that, when invoked, returns:
 * 
 *                     base^exponent
 * 
 *                 For example, power(3, 4) = 3 * 3 * 3 * 3. Assume that exponent is an integer 
 *                 greater than or equal to 1. 
 * 
 *                 Hint: The recursion step would use the relationship
 * 
 *                     base^exponent = base · base^(exponent – 1)
 * 
 *                 and the terminating condition occurs when the exponent is equal to 1 because
 * 
 *                     base^1 = base
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 14-11-2025
 */

#include <iostream>
#include <format>

using namespace std;

// function prototype
int power(int base, int exponent);

int main() {
    // display program header
    cout << "------------------------------------------\n";
    cout << "  Recursive Exponentiation Calculator\n";
    cout << "------------------------------------------\n";

    // test cases to demonstrate the function
    // ───────────────────────────────────────────────────────
    cout << "Test Cases:\n";
    cout << "-------------------------------------------\n";
    
    // test case 1: example from problem statement
    cout << format("power(3, 4) = {}\n", power(3, 4));
    
    // test case 2: base case (exponent = 1)
    cout << format("power(5, 1) = {}\n", power(5, 1));
    
    // test case 3: larger exponent
    cout << format("power(2, 8) = {}\n", power(2, 8));
    
    // test case 4: base of 10
    cout << format("power(10, 3) = {}\n", power(10, 3));
    
    // test case 5: negative base
    cout << format("power(-2, 5) = {}\n", power(-2, 5));
    
    cout << "\n";
    // ───────────────────────────────────────────────────────
    
    // interactive section
    // ────────────────────────────────────────────────────────────────
    cout << "------------------------------------------\n";
    cout << "  Interactive Mode\n";
    cout << "------------------------------------------\n";
    
    int base{0};
    int exponent{0};
    
    // get base from user
    cout << "Enter the base: ";
    cin >> base;
    
    // get exponent from user with validation
    do {
        cout << "Enter the exponent (must be >= 1): ";
        cin >> exponent;
        
        if (exponent < 1) {
            cout << "Invalid input! Exponent must be >= 1.\n";
        }
    } while (exponent < 1);
    
    // calculate and display result
    int result{power(base, exponent)};
    cout << format("\nResult: {}^{} = {}\n", base, exponent, result);
    // ────────────────────────────────────────────────────────────────
    
    return 0;
}

/**
 * Recursively calculates base raised to the power of exponent.
 * 
 * @param base The base number
 * @param exponent The exponent (must be >= 1)
 * @return base^exponent
 * 
 * Base case:      base^1 = base
 * Recursive rule: base^exponent = base · base^(exponent-1)
 */
int power(int base, int exponent) {
    // base case: when exponent is 1, return base
    if (exponent == 1) {
        return base;
    }
    
    // recursive step: base^exponent = base * base^(exponent-1)
    return base * power(base, exponent - 1);
}