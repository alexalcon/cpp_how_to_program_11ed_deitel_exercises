/**
 * File: exercise_2_19_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * ----------------------------------------------------------------------------------------------
 * Description: (Odd or Even) Write a program that reads an integer and determines and prints
 *              whether it’s odd or even. [Hint: Use the remainder operator (%). An even number 
 *              is a multiple of 2. Any multiple of 2 leaves a remainder of zero when divided 
 *              by 2.]
 * ----------------------------------------------------------------------------------------------
 * Created on: 29-02-2024
 */

#include <iostream>

using namespace std;

int main() {
    // read an integer number from user 
    //------------------------------------
    int number{0};
    cout << "Enter an integer number: ";
    cin >> number;
    //------------------------------------

    // main logic
    //******************************************** 
    if (number % 2 == 0) {
        cout << number << " is an even number."; 
    }
    if (number % 2 == 1) {
        cout << number << " is an odd number."; 
    }
    //******************************************** 

    return 0;
}