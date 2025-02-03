/**
 * File: exercise_4_10_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Modified Compound-Interest Program) Modify the compound-interest application of 
 *                 Fig.4.17 — which introduced the Boost Multiprecision cpp_dec_float_50 class — to 
 *                 repeat its steps for interest rates of 5%, 6%, 7%, 8%, 9% and 10%. Use a for loop 
 *                 to vary the interest rate. You’ll see the wonders of compound interest in action.  
 * -------------------------------------------------------------------------------------------------
 * Created on: 03-02-2025
 */

#include <iostream>
#include <format>

#include <boost/multiprecision/cpp_dec_float.hpp>

#include "decimalformatter.h"

using namespace std;
using boost::multiprecision::cpp_dec_float_50;

int main() {
    // intial phase
    //----------------------------------------------------------------
    cpp_dec_float_50 principal{10000000}; // $1000 initial principal
   
    cout << format("Initial principal: {:>7}\n\n", 1000);

    // table headers
    //==========================================================
    // horizontal up table header ruler
    for (int counter{1} ; counter <= 136 ; counter++) {
        cout << "-";
    }
    cout << "\n";
   
    // display headers 
    cout << format("{}{:>22}{:>22}{:>22}{:>22}{:>22}{:>22}\n",
                   "Year", 
                   "Deposit amount (5%)", 
                   "Deposit amount (6%)",
                   "Deposit amount (7%)",
                   "Deposit amount (8%)",
                   "Deposit amount (9%)",
                   "Deposit amount (10%)");

    // horizontal down table header ruler
    for (int counter{1} ; counter <= 136 ; counter++) {
        cout << "-";
    }
    cout << "\n";
    //==========================================================
    //----------------------------------------------------------------

    // processing phase
    // calculate amount on deposit for each of ten years
    for (int year{1} ; year <= 10 ; ++year) { // counter-controlled iteration for yearly interest 
        cpp_dec_float_50 rate{"0.05"};    // initial interest rate (5%)
        
        cout << format("{:>4}", year); // print year in each arrow
        for (int i{1} ; i <= 6 ; ++i) { // calcualte amount on deposit for each interest rate
            cpp_dec_float_50 amount{principal * pow(1 + rate, year)};
            cout << format("{:>22}", amount);

            rate += 0.01; // increase interest reate by one in each arrow
        }
        cout << "\n";
    }
   
    // horizontal down table ruler
    for (int counter{1} ; counter <= 136 ; counter++) {
        cout << "-";
    }
    cout << "\n";
    
    return 0;
}