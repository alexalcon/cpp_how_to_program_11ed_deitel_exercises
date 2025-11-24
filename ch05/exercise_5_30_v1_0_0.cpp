/**
 * File: exercise_5_30_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: (Distance Between Points) Write function distance that calculates the distance 
 *              between two points (x1, y1) and (x2, y2). All numbers and return values should 
 *              be of type double.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 23-11-2025
 */

#include <iostream>
#include <format>
#include <cmath>

using namespace std;

// function prototype
double distanceFormula(double x1, double y1, double x2, double y2);

int main() {
    double x1{0.0}, y1{0.0};
    cout << "Enter first point: ";
    cin >> x1 >> y1;
    
    double x2{0.0}, y2{0.0};
    cout << "Enter second point: ";
    cin >> x2 >> y2;

    cout << format("Distance between points: {:.4f}", distanceFormula(x1, y1, x2, y2));
}

double distanceFormula(double x1, double y1, double x2, double y2) {
    return (sqrt( pow((x2 - x1), 2) + pow((y2 - y1), 2) ));
}