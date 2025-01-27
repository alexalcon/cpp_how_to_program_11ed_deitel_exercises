/**
 * File: exercise_3_25_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Factorial) The factorial of a nonnegative integer n is written n! (pronounced “n
 *                 factorial”) and is defined as follows:
 *      
 *                     n! = n · (n – 1) · (n – 2) · … · 1   (for values of n greater than 1)
 *                 and
 *                      n! = 1   (for n = 0 or n = 1).
 * 
 *                 For example, 5! = 5 · 4 · 3 · 2 · 1, which is 120. Use while statements in each 
 *                 of the following:
 * 
 *                      a) Write a program that reads a nonnegative integer and computes and prints 
 *                         its factorial. [Note: Factorial values grow quickly beyond what you can 
 *                         represent with C++’s fundamental integer types. Consider using Boost     
 *                         Multiprecision’s cpp_int type here, as shown in Section 3.14.]
 *              
 *                      b) Write a program that estimates the value of the mathematical constant e  
 *                         by using the formula: 
 *                      
 *                              e = 1 + (1/1!) + (1/2!) + (1/3!) + ...
 * 
 *                        Prompt the user for the desired accuracy of e (i.e., the number of terms
 *                        in the summation).
 * 
 *                      c) Write a program that computes the value of e^x by using the formula:
 * 
 *                              e^x = 1 + (x/1!) + (x^2/2!) + (x^3/3!) + ... 
 * 
 *                         Prompt the user for the desired accuracy of e^x (i.e., the number of
 *                         terms in the summation).
 * -------------------------------------------------------------------------------------------------
 * Created on: 07-01-2025
 */

#include <iostream>
#include <iomanip>
#include <boost/multiprecision/cpp_int.hpp>
#include <boost/multiprecision/cpp_dec_float.hpp>

using namespace std;
using boost::multiprecision::cpp_int;
using boost::multiprecision::cpp_dec_float_100;

int main() {
    // initializing cpp_ints
    cpp_int large_integer{0}; // task a) 
    cpp_int counter{1}; 
    cpp_int factorial{1}; 

    // a) factorial of a non-negative integer
    //--------------------------------------------------------------
    // initialization phase
    cout << "Enter a nonnegative integer number (option \"a\"): ";
    cin >> large_integer;

    // processing phase
    while(counter <= large_integer) {  
        // main logic
        //*********************
        factorial *= counter;

        counter++;
        //*********************
    }

    cout << "The factorial of " << large_integer 
                                << " is: " 
                                << factorial;
    //--------------------------------------------------------------

    cout << "\n---------------------------------------------------";

    // b) e = 1 + (1/1!) + (1/2!) + (1/3!) + ...
    //---------------------------------------------------------
    // initializing cpp_ints
    cpp_dec_float_100 e{1.0};  // 'e' constant
    int counter_b{1};          // 'e' sumation counter
    cpp_int factorial_b{1};    // denominator factorial

    // initialization phase
    cpp_int accuracy_b; // number of sumation terms
    cout << "\nEnter the numbers of terms in the sumation"
         << " (option \"b\"): ";
    cin >> accuracy_b;

    // processing phase
    // main logic
    //*********************************************
    // counter-controlled iteration for sumation 
    // each iteration is a term computation
    while( counter_b <= (accuracy_b - 1) ) {
        factorial_b *= counter_b;

        e += 1 / cpp_dec_float_100(factorial_b);
    
        counter_b++;
    }
    //*********************************************

    cout << setprecision(100) << fixed 
         << "Constant e approximation: " << e;
    //---------------------------------------------------------
    
    cout << "\n---------------------------------------------------";
    
    // c) e^x = 1 + (x/1!) + (x^2/2!) + (x^3/3!) + ...
    //--------------------------------------------------------
    // initializing cpp_ints
    cpp_dec_float_100 ex{1.0}; // 'e^x' function
    int counter_c{1};          // 'e^x' sumation counter
    cpp_int factorial_c{1};    // denominator factorial

    // initialization phase
    cpp_int accuracy_c; // number of sumation terms
    cout << "\nEnter the numbers of terms in the sumation"
         << " (option \"c\"): ";
    cin >> accuracy_c;

    cpp_dec_float_100 x; // variable x (real number)
    cout << "Enter the variable x (real number): ";
    cin >> x;
    cpp_dec_float_100 hold_x = x; // holding variable x 
    
    // processing phase
    // main logic
    //*********************************************
    // counter-controlled iteration for sumation 
    // each iteration is a term computation
    while( counter_c <= (accuracy_c - 1) ) {
        factorial_c *= counter_c; // denominator 

        ex += x / cpp_dec_float_100(factorial_c);
        
        x *= hold_x; // numerator
    
        counter_c++;
    }
    //*********************************************

    cout << setprecision(100) << fixed 
         << "e^x approximation: " << ex;
    //--------------------------------------------------------
    
    return 0;
}