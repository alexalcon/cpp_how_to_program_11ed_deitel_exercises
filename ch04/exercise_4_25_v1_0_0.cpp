/**
 * File: exercise_4_25_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Peter Minuit Problem) Legend has it that, in 1626, Peter Minuit purchased 
 *                 Manhattan Island for $24.00 in barter. Did he make a good investment? To answer
 *                 this question, modify the compound-interest program of Fig. 4.4 to begin with a 
 *                 principal of $24.00 and to calculate the amount of interest on deposit if that 
 *                 money had been kept on deposit until this year (e.g., 397 years through 2023). 
 *                 Place the for loop that performs the compound-interest calculation in an outer 
 *                 for loop that varies the interest rate from 5% to 10% to observe the wonders of
 *                 compound interest.
 * -------------------------------------------------------------------------------------------------
 * Created on: 22-02-2025
 */

#include <iostream>
#include <format>

#include <boost/multiprecision/cpp_dec_float.hpp>

#include "decimalformatter.h"

using namespace std;
using boost::multiprecision::cpp_dec_float_50;

int main() {
    // initialization phase
    //------------------------------------------------------------
    cpp_dec_float_50 principal{24.00}; // $24 initial principal
    
    cout << format("Initial principal: {:>7} $\n\n", principal);
    
    // table headers
    //==========================================================
    // horizontal up table header ruler
    for (int counter{1} ; counter <= 166 ; ++counter) {
        cout << "-";
    }
    cout << "\n";
    
    // display headers
    cout << format("{}{:>27}{:>27}{:>27}{:>27}{:>27}{:>27}\n",
        "Year", 
        "Deposit amount in $ (5%)", 
        "Deposit amount in $ (6%)",
        "Deposit amount in $ (7%)",
        "Deposit amount in $ (8%)",
        "Deposit amount in $ (9%)",
        "Deposit amount in $ (10%)");
        
    // horizontal down table header ruler
    for (int counter{1} ; counter <= 166 ; counter++) {
        cout << "-";
    }
    cout << "\n";
    //==========================================================
    //------------------------------------------------------------

    // processing phase 
    // calculate amount on deposit since 1626 to 2025
    for (int year{1} ; year <= 400 ; ++year) { // counter-controlled iteration for yearly interest 
        cpp_dec_float_50 rate{"0.05"}; // initial interest rate (5%)
        
        cout << format("{:>4}", 1625 + year); // print year in each arrow
        for (int i{1} ; i <= 6 ; ++i) { // calcualte amount on deposit for each interest rate
            cpp_dec_float_50 amount{principal * pow(1 + rate, year)};
            cout << format("{:>27}", amount);

            rate += 0.01; // increase interest reate by one in each arrow
        }
        cout << "\n";
    }
   
    // horizontal down table ruler
    for (int counter{1} ; counter <= 166 ; counter++) {
        cout << "-";
    }
    cout << "\n";

    return 0;
}