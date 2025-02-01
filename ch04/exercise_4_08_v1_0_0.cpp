/**
 * File: exercise_4_08_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: (Calculating the Product of Odd Integers) Write an application that calculates the 
 *              product of the odd integers from 1 to 15. 
 * -------------------------------------------------------------------------------------------------
 * Created on: 31-01-2025
 */

#include <iostream>
#include <format>

using namespace std;

int main() {
    // initialization phase
    int multiplier{1};

    // processing phase
    // main logic
    // counter-controlled iteration to multiply 
    // odd integers from 1 to 15 
    for (int counter{1} ; counter <= 15 ; ++counter) {
        if (counter % 2 == 1) {
            multiplier *= counter;
        }
    }

    // termination phase
    cout << format("The product is: {}\n", multiplier);

    return 0;
}