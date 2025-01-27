/**
 * File: exercise_3_20_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: (Multiples of 2 with an Infinite Loop) Write a program that prints the powers of the
 *              integer 2, namely 2, 4, 8, 16, 32, 64, etc. Your while loop should not terminate 
 *              (i.e., you should create an infinite loop). To do this, simply use the keyword true
 *              as the expression for the while statement. What happens when you run this program?
 * -------------------------------------------------------------------------------------------------
 * Created on: 29-12-2024
 */

#include <iostream>

int main() {
    int number{2};

    while (true) {
        std::cout << number << " "; 
        number*=2; // arithmetic overflow
    }

    return 0;
}