/**
 * File: exercise_4_07_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Find the Smallest Value) Write an application that finds the smallest of several 
 *                 integers. Assume that the first value read specifies the number of values to 
 *                 input from the user. 
 * -------------------------------------------------------------------------------------------------
 * Created on: 31-01-2025
 */

#include <iostream>
#include <format>

using namespace std;

int main() {
    // initialization phase
    //--------------------------------------------------------------------
    // integer limit inputs entered by the user
    int integer;
    cout << "Enter integer limit: ";
    cin >> integer;
    int hold{integer}; // hold up variable to evaluate 
                       // the switch controlling expression

    int smallest{integer}; // assume smallest is the first integer input 
    //--------------------------------------------------------------------

    // processing phase
    // check out the limit input entered by the user
    switch (hold) { 
        case 0: // 0 limit input was entered
            cout << "\nNo integers were netered.\n";
            break;
        
        case 1: // 1 limit input was entered
            cout << "Enter an integer: ";
            cin >> integer;
            
            cout << format("\nThe smallest integer is: {}\n", integer);

            break;
        
        default: // limit input major to one was entered
            // main logic 
            // counter-controlled logic to keep track the smallest integer
            for (int counter{0} ; counter < hold ; ++counter ) {
                cout << "Enter an integer: ";
                cin >> integer;

                if (integer < smallest) {
                    smallest = integer;
                }
            }

            cout << format("\nThe smallest integer is: {}\n", smallest);

            break;
    }

    return 0;
}