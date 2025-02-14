/**
 * File: exercise_4_15_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Calculating the Value of π) Calculate the value of π from the infinite series
 * 
 *                      π = 4 - (4/3) + (4/5) - (4/7) + (4/9) - (4/11) + ...
 * 
 *                 Print a table like the one below that shows the value of π approximated by 
 *                 computing the first 200,000 terms of this series. How many terms do you have to 
 *                 use before you first get a value that begins with 3.14159?
 *          
 *                      Accuracy set at: 200000
 * 
 *                      term    pi
 *                      1       4.00000000
 *                      2       2.66666667
 *                      3       3.46666667
 *                      4       2.89523810
 *                      5       3.33968254
 *                      ...
 * -------------------------------------------------------------------------------------------------
 * Created on: 14-02-2025
 */

#include <iostream>
#include <format>

#include <boost/multiprecision/cpp_dec_float.hpp>

#include "decimalformatter.h"

using namespace std;
using boost::multiprecision::cpp_dec_float_50;

int main() {
    // initialization phase
    //-------------------------------------------------------
    // cpp_dec_float_50 pi{0};
    long double pi{0.0};
    int positive_unit{1};  // positive unit multiplier
    int negative_unit{-1}; // negative unit multiplier
  
    // table headers
    //===========================================
    // horizontal up table header ruler 
    for (int i{1} ; i <= 30 ; ++i) {
        cout << "-";
    }
    cout << "\n";
    
    // display headers   
    cout << format("{}{:>13}\n", "term", "pi");
    
    // horizontal down table header ruler 
    for (int i{1} ; i <= 30 ; ++i) {
        cout << "-";
    }
    cout << "\n";
    //===========================================
    //-------------------------------------------------------

    // processing phase
    // main logic
    // counter-controlled iteration
    // loop through 200000 terms to approximate
    // π with sufficient precision
    for (int term{1} ; term <= 200000 ; ++term) {
        // each term uses ((2 * term) - 1) to get the nth odd integer,
        // applied here in the Leibniz series for π
        if ( (term % 2) == 1 ) { // add term when 'term' is odd
            pi += positive_unit*( 4.0 / ((2 * term) - 1) ); 
        }
        else { // subtract term when 'term' is even
            pi += negative_unit*( 4.0 / ((2 * term) - 1) ); 
        }
        
        // cout << format("{:4d}{:>13}\n", term, pi); // format for cpp_dec_float_50 object 
        cout << format("{:4d}{:>13.8f}\n", term, pi); // format for long double type
    }

    return 0;
}