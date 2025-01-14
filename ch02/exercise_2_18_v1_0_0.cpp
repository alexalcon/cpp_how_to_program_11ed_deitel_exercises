/**
 * File: exercise_2_18_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Largest and Smallest Integers) Write a program that reads in five integers and 
 *                 determines and prints the largest and the smallest integers in the group. Use 
 *                 only the programming techniques you learned in this chapter.
 * -------------------------------------------------------------------------------------------------
 * Created on: 29-02-2024
 */

#include <iostream>

using namespace std;

int main() {
    // read five integers from user
    //------------------------------------
    int number1{0};
    int number2{0};
    int number3{0};
    int number4{0};
    int number5{0};

    cout << "Enter five integers: ";
    cin >> number1 >> number2 >> number3 
        >> number4 >> number5;
    //------------------------------------

    // main logic: non-exclusive conditionals
    // *****************************************
    int smallest, largest;    

    // initial assumption
    smallest = largest = number1;

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

     // check against fourth number
    if (number4 > largest) {
        largest = number4;
    }
    if (number4 < smallest) {
        smallest = number4;
    }
    
    // check against fifth number
    if (number5 > largest) {
        largest = number5;
    }
    if (number5 < smallest) {
        smallest = number5;
    }
    // *****************************************

    // display results
    cout << "Smallest is: " << smallest << "\n";
    cout << "Largest is: " << largest << "\n";


    return 0;
}

