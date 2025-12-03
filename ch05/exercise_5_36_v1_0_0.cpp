/**
 * File: exercise_5_36_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Circle Area) Write a C++ program that prompts the user for the radius of a 
 *                 circle, then calls inline function circleArea to calculate the area of that 
 *                 circle.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 03-12-2025
 */
 
#include <iostream>
#include <format>
#include <numbers>

// inline function to calculate circle area
// ━━━━━━━━━━━━━━━━
// processing phase
// ━━━━━━━━━━━━━━━━
inline double circleArea(double radius) {
    return std::numbers::pi * radius * radius;
}
 
int main() {
    // ━━━━━━━━━━━━━━━━━━━━
    // initialization phase
    // ━━━━━━━━━━━━━━━━━━━━
    double radius{0.0};
	std::cout << "Enter the radius of the circle: ";
	std::cin >> radius;
 
    // input validation 
	while (!std::cin || radius < 0.0) {
        if (!std::cin) {
            std::cin.clear();
			std::cin.ignore(10000, '\n');
			std::cout << "Invalid input. Enter a non-negative number: ";
		} else {
            std::cout << "Radius must be non-negative. Enter the radius: ";
		}
		std::cin >> radius;
	}
 
    // ━━━━━━━━━━━━━━━━━
    // termination phase
    // ━━━━━━━━━━━━━━━━━
	const double area = circleArea(radius);
	std::cout << std::format("Area: {:.6f}\n", area);

	return 0;
}