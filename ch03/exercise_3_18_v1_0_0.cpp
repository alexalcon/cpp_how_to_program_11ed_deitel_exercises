/**
 * File: exercise_3_18_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Printing the Decimal Equivalent of a Binary Number) Input an integer containing
 *                 only 0s and 1s (i.e., a “binary” integer) and print its decimal equivalent. Use 
 *                 the remainder and division operators to pick off the “binary” number’s digits 
 *                 one at a time from right to left. In the decimal number system, the rightmost 
 *                 digit has a positional value of 1, the next digit left has a positional value of 
 *                 10, then 100, then 1000, and so on. Similarly, in the binary number system, the 
 *                 rightmost digit has a positional value of 1, the next digit left has a positional
 *                 value of 2, then 4, then 8, and so on. Thus the decimal number 234 can be 
 *                 interpreted as 2 * 100 + 3 * 10 + 4 * 1. The decimal equivalent of binary 1101 is 
 *                 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8 or 1 + 0 + 4 + 8, or 13. [Note: To learn more about
 *                 binary numbers, refer to see the Number Systems appendix at 
 *                 https://deitel.com/cpphtp11.]
 * -------------------------------------------------------------------------------------------------
 * Note: This program assumes that the input binary positive integer number and its decimal 
 *       equivalent fit within the range of system-defined integer limits (INT_MIN to INT_MAX).
 * -------------------------------------------------------------------------------------------------
 * Created on: 29-12-2024
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // initialization phase
    //-----------------------------------------------------
    // read binary positive integer from user and
    // ensure the binary positive number is within 
    // valid system integer limits
    // (optional: add additional validation if necessary)
    int binary_number{0}; // positive binary number
    cout << "Enter binary positive integer: ";
    cin >> binary_number;  

    int decimal_number{0};
    int counter{0};
    //-----------------------------------------------------

    // processing phase
    while(binary_number != 0) {  
        // main logic
        // breaking down binary digits
        //***********************************
        int binary_digit;
        binary_digit = binary_number % 10;

        binary_number /= 10;   
        //***********************************

        // converting from binary to decimal
        decimal_number = decimal_number + binary_digit*pow(2, counter);
        counter++;
    }
    
    // termination phase
    cout << "The decimal equivalent is: " << decimal_number;
    
    return 0;
}


/**************************************************************************
 * Side Note:                                                             *         
 *                                                                        *
 * The mathematical theory underpinning the decimal representation of a   *
 * binary positive integer is rooted in a fundamental topic in Number     *
 * Theory, specifically the concept of base-b representation. This theory *
 * not only provides the foundation for understanding numerical systems   *
 * and conversions between different bases but also plays a critical role *
 * in algorithms involving divisibility, modular arithmetic, and the      *
 * computation of least common multiples (LCM).                           *
 *                                                                        *
 * It is essential not only to apply the method for representing the      *
 * decimal equivalent of a binary number but also to understand how the   *
 * process works. Gaining insight into the underlying mechanisms—such as  *
 * how positional values in base-b representations correspond to powers   *
 * of the base—enables a deeper comprehension of numerical operations     *
 * and fosters a more robust mathematical intuition.                      *
 *                                                                        *
 * For a deeper insight, refer to José Plínio's book on Introdução à      *
 * Teoria dos Números, Chapter 1: Divisibilidade, Section 1.7: Mínimo     *
 * Múltiplo Comum. Theorem 1.17 rigorously explores the fundamental       *
 * properties of base-b representations, proving that every positive      *
 * integer can be uniquely expressed in the form:                         *
 *                                                                        *
 *     n = a_k * b^k + a_(k-1) * b^(k-1) + ... + a_1 * b + a_0            *
 *                                                                        *
 * where b > 1, 0 ≤ a_i < b (for i = 0, 1, ..., k), and a_k ≠ 0. This     *
 * representation is key to understanding the uniqueness of number        *
 * representations in various bases and their implications in algorithms  *
 * for number manipulation, including the computation of least common     *
 * multiples and other critical operations in number theory.              *
 **************************************************************************/