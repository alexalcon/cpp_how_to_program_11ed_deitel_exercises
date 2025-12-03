/**
 * File: exercise_5_39_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Function Template minimum) Write a program that uses a 
 *                 function template called minimum to determine the smaller of 
 *                 two arguments. Test the program using integer, character, and 
 *                 floating-point arguments.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 03-12-2025
 */

#include <iostream>
#include "exercise_5_39_v1_0_0.h" // include definition of function template minimum

using namespace std;

int main() {
    // demonstrate minimum with int values
    cout << "Input two integer values: ";
    int int1, int2;
    cin >> int1 >> int2;
    cout << "Minimum is: " << minimum(int1, int2) << endl;
    
    // demonstrate minimum with char values
    cout << "\nInput two character values: ";
    char char1, char2;
    cin >> char1 >> char2;
    cout << "Minimum is: " << minimum(char1, char2) << endl;
    
    // demonstrate minimum with float values
    cout << "\nInput two floating-point values: ";
    float float1, float2;
    cin >> float1 >> float2;
    cout << "Minimum is: " << minimum(float1, float2) << endl;

    return 0;
}
