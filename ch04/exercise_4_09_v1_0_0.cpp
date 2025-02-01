/**
 * File: exercise_4_09_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Factorials) Factorials are used frequently in probability problems. The 
 *                 factorial of a positive integer n (written n! and pronounced “n factorial”) is 
 *                 equal to the product of the positive integers from 1 to n. Write an application 
 *                 that calculates the factorials  of 1 through 20. Use type long. Display the 
 *                 results in tabular format. What difficulty might prevent you from calculating 
 *                 the factorial of 100? 
 * -------------------------------------------------------------------------------------------------
 * Created on: 31-01-2025
 */

#include <iostream>
#include <format>

using namespace std;

int main() {
    // initialization phase
    long long factorial{1};
    
    // processing phase
    //----------------------------------------------------
    // table header
    cout << format("{}{:>22}\n", "Number", "Factorial");
    
    // main logic
    // counter-controlled nested iterations
    // to compute factorials of 1 through 20
    for (int i{1} ; i <= 20 ; ++i) {
        for (int j{1} ; j <= i ; ++j) {
            factorial *= j;
        }
    
        cout << format("{:>6}{:>22}\n", i, factorial);
        
        factorial = 1;
    }
    //----------------------------------------------------

    return 0;
}

/**************************************************************************
 * Side Note:                                                             *
 *                                                                        *
 * Factorial values grow quickly beyond what you can represent with C++’s *
 * fundamental integer types. Consider using Boost Multiprecision’s       *
 * cpp_int type. Therefore, with the 'long factorial{1}' statement (in    *
 * line 22), we could have gotten an arithmetic overflow. Thus, a         *
 * 'long long factorial{1}' statement was used (in line 22).              *
 **************************************************************************/