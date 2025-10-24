/**
 * File: exercise_5_03_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: (Rounding Numbers) An application of function floor is rounding a value to the 
 *              nearest integer. The statement
 *              
 *                  y = floor(x + 0.5);
 *
 *              rounds the number x to the nearest integer and assigns the result to y. Write a 
 *              program that reads several numbers and uses the preceding statement to round 
 *              each of these numbers to the nearest integer. For each number processed, print 
 *              both the original number and the rounded number.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 24-10-2025
 */

#include <iostream>
#include <cmath>
#include <format>

using namespace std;

int main() {
    // floor math function arguments
    double a1{25.3};
    double b1{3};
    double c1{-5.3};
    double d1{-9.3};
    double e1{0.3};
    double f1{-0.8};
    double g1{5};
    
    // floor math function results/values
    double a2{floor(a1 + 0.5)};
    double b2{floor(b1 + 0.5)};
    double c2{floor(c1 + 0.5)};
    double d2{floor(d1 + 0.5)};
    double e2{floor(e1 + 0.5)};
    double f2{floor(f1 + 0.5)};
    double g2{floor(g1 + 0.5)};
    
    // the floor(x) function rounds 'x' to the largest integer not greater than 'x'
    cout << format("floor({}) = {:>.0f}", a1, a2) << endl;
    cout << format("floor({}) = {:>.0f}", b1, b2) << endl;
    cout << format("floor({}) = {:>.0f}", c1, c2) << endl;
    cout << format("floor({}) = {:>.0f}", d1, d2) << endl;
    cout << format("floor({}) = {:>.0f}", e1, e2) << endl;
    cout << format("floor({}) = {:>.0f}", f1, f2) << endl;
    cout << format("floor({}) = {:>.0f}", g1, g2) << endl;

    return 0;
}