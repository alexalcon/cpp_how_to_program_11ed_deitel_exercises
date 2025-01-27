/**
 * File: exercise_2_15_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * --------------------------------------------------------------------------------------------
 * Description: ✰ (Smallest and Largest) Write a program that inputs three integers from the 
 *                 keyboard and prints the smallest and largest of these three numbers.
 * --------------------------------------------------------------------------------------------
 * Created on: 29-02-2024
 */

#include <iostream>

using namespace std;

int main() {
    // read three integers from user
    //-------------------------------------
    int number1{0};
    int number2{0};
    int number3{0};

    cout << "Enter three integers: ";
    cin >> number1 >> number2 >> number3;
    //-------------------------------------

    // main logic - non-exclusive conditionals
    // *****************************************
    int smallest, largest;    

    // initial assumption
    smallest = largest = number1;
    /**
     * this statement is the same as:
     *   smallest = number1;
     *   largest = number1;
     */

    // check against second number
    if (number2 > largest) {
        largest = number2;
    }
    if (number2 < smallest) {
        smallest = number2;
    }
    
    // check against third number
    if (number3 > largest) {
        largest = number3;
    }
    if (number3 < smallest) {
        smallest = number3;
    }
    // *****************************************

    // 

    // display results
    cout << "Smallest is: " << smallest << "\n";
    cout << "Largest is: " << largest << "\n";

    return 0;
}