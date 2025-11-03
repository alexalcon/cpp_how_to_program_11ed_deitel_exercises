/**
 * File: exercise_5_8_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Exponentiation) Write a function integerPower(base, exponent) that returns the 
 *                 value of base^exponent.
 * 
 *                 For example, integerPower(3, 4) = 3 * 3 * 3 * 3. Assume that exponent is a 
 *                 positive, nonzero integer and that base is an integer. Do not use any math 
 *                 library functions.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 03-11-2025
 */

#include <iostream>
#include <format>

using namespace std;

int integerPower(int base, int exponent);

int main() {
    int base{};
    cout << "Enter base integer: "; 
    cin >> base;
    
    int exponent{};
    cout << "Enter positive nonzero integer exponent: "; 
    cin >> exponent;
    
    cout << "-----------------\n";
    cout << format("Result: {:d}\n", integerPower(base, exponent));
    cout << "-----------------\n";

    return 0;
}

int integerPower(int base, int exponent) {
    int m{1}; // base multiplier
    
    for (int i{0} ; i < exponent ; ++i) {
        m *= base;
    }

    return m;
}