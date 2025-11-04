/**
 * File: exercise_5_9_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: (Hypotenuse Calculations) Define a function hypotenuse that calculates the 
 *              hypotenuse of a right triangle when the other two sides are given. The function 
 *              should take two double arguments and return the hypotenuse as a double. Use this 
 *              function in a program to determine the hypotenuse for each triangle shown below.
 * 
 *                       Triangle   Side 1   Side 2
 *                       ──────────────────────────
 *                       1          3.0      4.0
 *                       2          5.0      12.0
 *                       3          8.0      15.0
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 04-11-2025
 */

#include <iostream>
#include <cmath>
#include <format>

using namespace std;

double hypotenuse(double side_1, double side_2);

int main() {
    double side_1{3.0}, side_2{4.0};
    
    cout << "---------------------------------------\n";
    cout << "Triangle" << "   " << "Side 1" << "   " << "Side 2" << "   " << "Hypotenuse\n";
    cout << "---------------------------------------\n";
    
    cout << "1" << format("{:>14.2f}", side_1) 
                << format("{:>9.2f}", side_2) 
                << format("{:>9.2f}\n", hypotenuse(side_1, side_2));
    
    side_1 = 5.0, side_2 = 12.0;
    cout << "2" << format("{:>14.2f}", side_1) 
    << format("{:>10.2f}", side_2) 
    << format("{:>8.2f}\n", hypotenuse(side_1, side_2));
    
    side_1 = 8.0, side_2 = 15.0;
    cout << "3" << format("{:>14.2f}", side_1) 
                << format("{:>10.2f}", side_2) 
                << format("{:>9.2f}\n", hypotenuse(side_1, side_2));

}

double hypotenuse(double side_1, double side_2) {
    return sqrt(pow(side_1, 2) + pow(side_1, 2 ));
}