/**
 * File: exercise_3_24_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Sides of a Right Triangle) Write a program that reads three nonzero integers and
 *                 determines and prints whether they’re the sides of a right triangle.
 * -------------------------------------------------------------------------------------------------
 * Created on: 30-12-2024
 */

#include <iostream>
#include <iomanip>

int main() {
    // initialization phase
    double a, b, c; // triangle sides
    std::cout << "Enter triangle sides: ";
    std::cin >> a >> b >> c;

    // processing phase
    //----------------------------------------------------------
    // show results (with four digits of precision)
    std::cout << std::setprecision(4) << std::fixed;

    // sort sides in ascending order
    /**
     * sort in ascending order logic - swap logic
     *
     * sorting using non-exclusive conditionals
     * (single-selection form of if statements 
     * are non-exclusive conditionals) 
     * 
     *      'c' will be the hypotenuse 
     *      'a' and 'b' will be the sides  
     *
     * comparing all possible pairs
     */
    //********************************
    double hold; // holding variable

    if (a > b) {
        hold = a;
        a = b;
        b = hold;
    }
    if (a > c) {
        hold = a;
        a = c;
        c = hold;
    }
    if (b > c) {
        hold = b;
        b = c;
        c = hold;
    }
    //********************************

    // main logic
    // the pythagorean theorem
    //********************************************************
    if ( (c*c) == (a*a + b*b) ) {
         std::cout << "\nThe sides: " << a << " " 
                                           << b << " " 
                                           << "and " << c
                   << " represent a right triangle.";   
    }
    else {
         std::cout << "\nThe sides: " << a << " " 
                                           << b << " " 
                                           << "and " << c
                   << " do not represent a right triangle.";   
    }
    //********************************************************
    //----------------------------------------------------------

    return 0;
}