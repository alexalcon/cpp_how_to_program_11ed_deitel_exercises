/**
 * File: exercise_2_14_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * ------------------------------------------------------------------------------------------------
 * Description: (Comparing Integers) Write a program that asks the user to enter two integers, 
 *              obtains the numbers from the user, then prints the larger number followed by the
 *              words "is larger." If the numbers are equal, print the message "These numbers are
 *              equal."
 * ------------------------------------------------------------------------------------------------
 * Created on: 29-02-2024
 */

#include <iostream>

using namespace std;

int main() {
    // read two integers from user
    //-------------------------------
    int number1{0};
    int number2{0};

    cout << "Enter two integers: ";
    cin >> number1 >> number2;
    //-------------------------------

    // main logic: non-exclusive conditionals
    // trichotomy law
    //***************************************
    if (number1 > number2) {
        cout << number1 << " is larger.";
    }
    if (number2 > number1) {
        cout << number2 << " is larger.";
    }
    if(number1 == number2) {
        cout << "These numbers are equal.";
    }
    //***************************************

    return 0;
} 