/**
 * File: exercise_2_20.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * ------------------------------------------------------------------------------------------------
 * Description: (Multiples) Write a program that reads in two integers and determines and prints
 *              if the first is a multiple of the second. [Hint: Use the remainder operator (%).]
 * ------------------------------------------------------------------------------------------------
 * Date: February 2024 
 */

#include <iostream>

using namespace std;

int main() {
    // read two integers from user
    //---------------------------------
    int number1{0}, number2{0};

    cout << "Enter first integer: ";
    cin >> number1;
    
    cout << "Enter second integer: ";
    cin >> number2;
    //---------------------------------

    // main logic
    //************************************************************
    if (number1 % number2 == 0) {
        cout << number1 << " is multiple of " << number2 << ".";
    }
    if (number2 % number1 == 0) {
        cout << number2 << " is multiple of " << number1 << ".";
    }
    //************************************************************

    return 0;
} // end function main