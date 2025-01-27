/**
 * File: exercise_3_21_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: (Calculating a Circle’s Diameter, Circumference and Area) Write a program that 
 *              inputs a circle’s radius (as a double value) and computes and prints the diameter, 
 *              the circumference and the area. Use the value 3.14159 for π.
 * -------------------------------------------------------------------------------------------------
 * Created on: 29-12-2024
 */

#include <iostream>
#include <iomanip>

int main() {
    // initialization phase
    double radius{0.0};
    std::cout << "Enter radius: ";
    std::cin >> radius;

    // processing phase: calculations
    double diameter{radius*2};
    double circumference{2*3.14159*radius};
    double area{3.14159*radius*radius};

    // termination phase
    // show calculations results (with five digits of precision)
    std::cout << std::setprecision(5) << std::fixed;
    std::cout << "\nDiameter:\t" << diameter << std::endl;
    std::cout << "Circumference:\t" << circumference*2 << std::endl;
    std::cout << "Area:\t\t" << area << std::endl;

    return 0;
}