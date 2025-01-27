/**
 * File: exercise_2_23_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Digits of an Integer) Write a program that inputs a five-digit integer, 
 *                 separates the integer into its digits and prints them with three spaces between 
 *                 each. For example, if the user types in 42339, the program should print:
 *                      4   2   3   3   9        
 * -------------------------------------------------------------------------------------------------
 * Created on: 29-02-2024
 */

#include <iostream>

using namespace std;

int main() {
    //  read an integer number from user
    int number;
    cout << "Enter a 5-digit integer number: ";
    cin >> number;

    // main logic
    //*************************
    int d1, d2, d3, d4, d5;
    d1 = (number/10000) % 10;
    d2 = (number/1000) % 10;
    d3 = (number/100) % 10;
    d4 = (number/10) % 10;
    d5 = number % 10;
    //*************************

    // display result
    cout << d1 << "   " 
         << d2 << "   " 
         << d3 << "   " 
         << d4 << "   " 
         << d5; 
            
    return 0;
} 


/**************************************************************************
 * Side Note:                                                             *
 * The mathematical theory underpinning the main logic is rooted in a     *
 * fundamental topic in Number Theory, specifically the concept of        *
 * divisibility, and more precisely, the Division Algorithm. This theory  *
 * serves as the foundation for understanding how integers relate through *
 * division, remainders, and quotients.                                   *
 **************************************************************************/
