/**
 * File: exercise_3_09_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Find the Two Largest Numbers) Using an approach similar to Exercise 3.7, find
 *                 the two largest values among the 10 numbers. [Note: You must input each number 
 *                 only once.]
 * -------------------------------------------------------------------------------------------------
 * Created on: 24-12-2024
 */

#include <iostream>

int main() {
    // initialization phase
    int counter{1};       // number input counter
    int largest{0};       // assuming largest number is 0
    int secondLargest{0}; // assuming second largest number is 0

    // processing phase
    // using counter-controlled iteration
    while (counter <= 10) {
        std::cout << "Enter integer number: ";
        int number;
        std::cin >> number;

        // main logic 
        // update largest and second largest
        if (number > largest) { // largest number is reached out (same as exercise 3.7) 
            secondLargest = largest; // move the old largest to second largest
            largest = number;        // update largest
        } 
        else if (number > secondLargest) { // a second largest number is reached out
            secondLargest = number; // update second largest if applicable
        }
        
        counter++;
    }
    
    // termination phase 
    // output the two largest numbers
    std::cout << "\nThe largest number is: " << largest;
    std::cout << "\nThe second largest number is: " << secondLargest;

    return 0;
}