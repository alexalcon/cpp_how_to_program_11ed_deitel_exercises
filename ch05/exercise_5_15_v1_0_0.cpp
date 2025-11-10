/**
 * File: exercise_5_15_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Find the Minimum) Write a program that inputs three double-precision, 
 *                 floating-point numbers and passes them to a function that returns the smallest
 *                 number.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 10-11-2025
 */

#include <iostream>
#include <format>

using namespace std;

// function prototype
double minimum(double x, double y, double z);

int main() {
    // ━━━━━━━━━━━━━━━━━━━━
    // initialization phase
    // ━━━━━━━━━━━━━━━━━━━━
    double a{}, b{}, c{};
    cout << "Enter three double-precision numbers separated by spaces: ";
    cin >> a >> b >> c;
    
    // ━━━━━━━━━━━━━━━━
    // processing phase
    // ━━━━━━━━━━━━━━━━
    double minValue = minimum(a, b, c);
    
    // ━━━━━━━━━━━━━━━━━
    // termination phase
    // ━━━━━━━━━━━━━━━━━
    // format with 3 decimal places using std::format (C++20)
    cout << format("\nThe smallest value is: {:.3f}\n", minValue);

    return 0;
}

// function definition
// a simple non-exclusive conditional 'or' logic is used
// to determine the minimum value of three double data inputs
double minimum(double x, double y, double z) {
    double min = x;

    if (y < min)
        min = y;

    if (z < min)
        min = z;

    return min;
}