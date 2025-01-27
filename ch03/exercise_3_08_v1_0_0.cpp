/**
 * File: exercise_3_08_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: (Tabular Output) Write a C++ program that uses a while statement and the tab 
 *              escape sequence \t to print the following table of values:alignas
 *              
 *                      N       10*N    100*N   1000*N
 *                      1       10      100     1000
 *                      2       20      200     2000
 *                      3       30      300     3000
 *                      4       40      400     4000
 *                      5       50      500     5000
 * -------------------------------------------------------------------------------------------------
 * Created on: 20-12-2024
 */

#include <iostream>

int main() {
    // initialization phase
    int counter = 1;

    // processing phase
    // using counter-controlled iteration
    //---------------------------------------------------------
    std::cout << "N\t" 
              << "10*N\t" 
              << "100*N\t" 
              << "1000*N\n"; // table first row  
    
    while (counter <= 5) {
        std::cout << counter << "\t" << 10*counter << "\t"
                                     << 100*counter << "\t"
                                     << 1000*counter << "\n";
        
        counter++;
    }
    //---------------------------------------------------------
    
    return 0;
}