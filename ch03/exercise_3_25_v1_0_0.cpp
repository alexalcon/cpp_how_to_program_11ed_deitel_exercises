/**
 * File: exercise_3_25_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: (Factorial) The factorial of a nonnegative integer n is written n! (pronounced “n
 *              factorial”) and is defined as follows:
 *      
 *                  n! = n · (n – 1) · (n – 2) · … · 1   (for values of n greater than 1)
 *              and
 *                  n! = 1   (for n = 0 or n = 1).
 * 
 *              For example, 5! = 5 · 4 · 3 · 2 · 1, which is 120. Use while statements in each of 
 *              the following:
 * 
 *                  a) Write a program that reads a nonnegative integer and computes and prints its 
 *                     factorial. [Note: Factorial values grow quickly beyond what you can represent 
 *                     with C++’s fundamental integer types. Consider using Boost Multiprecision’s 
 *                     cpp_int type here, as shown in Section 3.14.]
 *              
 *                  b) Write a program that estimates the value of the mathematical constant e by 
 *                     using the formula: 
 *                      
 *                          e = 1 + (1/1!) + (1/2!) + (1/3!) + ...
 * 
 *                     Prompt the user for the desired accuracy of e (i.e., the number of terms in 
 *                     the summation).
 * 
 *                  c) Write a program that computes the value of e^x by using the formula:
 * 
 *                          e^x = 1 + (x/1!) + (x^2/2!) + (x^3/3!) + ... 
 * 
 *                     Prompt the user for the desired accuracy of e^x (i.e., the number of terms in 
 *                     the summation).
 * -------------------------------------------------------------------------------------------------
 * Created on: 07-01-2025
 */

#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using boost::multiprecision::cpp_int;

int main() {
    // initializing cpp_ints
    cpp_int large_integer{0}; 
    cpp_int counter{1}; 
    cpp_int factorial{1}; 

    // a)
    //--------------------------------------------------------------
    // initialization phase
    cout << "Enter a nonnegative integer number (option \"a\"): ";
    cin >> large_integer;
    cpp_int hold{large_integer}; // holding variable 

    // processing phase
    while(counter <= large_integer) {  
        // main logic
        //*********************
        factorial *= counter;

        counter++;
        //*********************
    }

    cout << "The factorial of " << hold 
                                << " is: " 
                                << factorial;
    //--------------------------------------------------------------

    // b)
    //--------------------------------------------------------------
    //--------------------------------------------------------------

    // c)
    //--------------------------------------------------------------
    //--------------------------------------------------------------
    
    return 0;
}