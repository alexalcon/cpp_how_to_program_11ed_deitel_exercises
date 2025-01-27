/**
 * File: exercise_3_07_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Find the Largest) The process of finding the largest number (i.e., the maximum 
 *                 of a group of numbers) is used frequently in computer applications. For example, 
 *                 a program that determines the winner of a sales contest inputs the number of 
 *                 units sold by each salesperson. The salesperson who sells the most units wins 
 *                 the contest. Write a C++ program that uses a while statement to determine and 
 *                 print the largest of 10 integers input by the user. Your program should use 
 *                 three variables, as follows:
 * 
 *                      a) counter: Used to count to 10 to keep track of how many numbers have 
 *                         been input.
 *                      b) number: The current number input to the program.
 *                      c) largest: The largest number found so far.
 * -------------------------------------------------------------------------------------------------
 * Created on: 20-12-2024
 */

#include <iostream>

int main() {
    // initialization phase
    int counter{1}; // number input counter
    int largest{0}; // assuming largest number is 0

    // processing phase
    // using counter-controlled iteration
    while (counter <= 10) {
        int number;
        std::cout << "Enter integer number: ";
        std::cin >> number;

        // main logic
        if (number > largest) {
            largest = number;        
        }

        counter++;
    }
    
    // termination phase 
    std::cout << "The largest number is: " << largest; 

    return 0;
}