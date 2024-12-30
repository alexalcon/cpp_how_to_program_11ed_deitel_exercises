/**
 * File: exercise_3_18_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: (Printing the Decimal Equivalent of a Binary Number) Input an integer containing
 *              only 0s and 1s (i.e., a “binary” integer) and print its decimal equivalent. Use the 
 *              remainder and division operators to pick off the “binary” number’s digits one at a 
 *              time from right to left. In the decimal number system, the rightmost digit has a
 *              positional value of 1, the next digit left has a positional value of 10, then 100,
 *              then 1000, and so on. Similarly, in the binary number system, the rightmost digit 
 *              has a positional value of 1, the next digit left has a positional value of 2, then
 *              4, then 8, and so on. Thus the decimal number 234 can be interpreted as 
 *              2 * 100 + 3 * 10 + 4 * 1. The decimal equivalent of binary 1101 is 
 *              1 * 1 + 0 * 2 + 1 * 4 + 1 * 8 or 1 + 0 + 4 + 8, or 13. [Note: To learn more about
 *              binary numbers, refer to see the Number Systems appendix at 
 *              https://deitel.com/cpphtp11.]
 * -------------------------------------------------------------------------------------------------
 * Created on: 29-12-2024
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // initialization phase
    // read binary positive integer from user
    //-----------------------------------------------
    int binary_number{0}; // positive binary number

    cout << "Enter binary positive integer: ";
    cin >> binary_number;  
    //-----------------------------------------------

    // processing phase
    while( binary_number != 0 ) {  
        // main logic
        // breaking down binary digits
        //-----------------------------------
        int binary_digit;
        binary_digit = binary_number % 10;

        binary_number = binary_number / 10;   
    
        cout << binary_digit;
        //-----------------------------------
    }
    
    return 0;
}