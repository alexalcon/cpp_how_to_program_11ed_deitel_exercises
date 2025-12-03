/**
 * File: exercise_5_40_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Function Template maximum) Write a program that uses a function template called
 *                 maximum to determine the larger of two arguments. Test the program using integer, 
 *                 character, and floating-point number arguments.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 03-12-2025
 */

#include <iostream>
#include "exercise_5_40_v1_0_0.h" // include definition of function template maximum

using namespace std;

int main() {
    // demonstrate maximum with int values
    cout << "Input two integer values: ";
    int int1, int2;
    cin >> int1 >> int2;
    cout << "Maximum is: " << maximum(int1, int2) << endl;
    
    // demonstrate maximum with char values
    cout << "\nInput two character values: ";
    char char1, char2;
    cin >> char1 >> char2;
    cout << "Maximum is: " << maximum(char1, char2) << endl;
    
    // demonstrate maximum with float values
    cout << "\nInput two floating-point values: ";
    float float1, float2;
    cin >> float1 >> float2;
    cout << "Maximum is: " << maximum(float1, float2) << endl;
    
    return 0;
}