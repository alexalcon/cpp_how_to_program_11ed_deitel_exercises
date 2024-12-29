/**
 * File: exercise_2_24_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: (Table) Using only the techniques of this chapter, write a program that calculates 
 *              the squares and cubes of the integers from 0 to 10. Use tabs to print the following 
 *              neatly formatted table of values:
 * 
 *                      number  square  cube
 *                      0       0       0
 *                      1       1       1
 *                      2       4       8
 *                      3       9       27
 *                      4       16      64
 *                      5       25      125
 *                      6       36      216
 *                      7       49      343
 *                      8       64      512
 *                      9       81      729
 *                      10      100     1000
 * -------------------------------------------------------------------------------------------------
 * Created on: 29-02-2024
 */

#include <iostream>

using namespace std;

int main() {
    cout << "number\tsquare\tcube\n";
    cout << 0 <<"\t" << 0*0 << "\t" << 0*0*0 << "\n";
    cout << 1 <<"\t" << 1*1 << "\t" << 1*1*1 << "\n";
    cout << 2 <<"\t" << 2*2 << "\t" << 2*2*2 << "\n";
    cout << 3 <<"\t" << 3*3 << "\t" << 3*3*3 << "\n";
    cout << 4 <<"\t" << 4*4 << "\t" << 4*4*4 << "\n";
    cout << 5 <<"\t" << 5*5 << "\t" << 5*5*5 << "\n";
    cout << 6 <<"\t" << 6*6 << "\t" << 6*6*6 << "\n";
    cout << 7 <<"\t" << 7*7 << "\t" << 7*7*7 << "\n";
    cout << 8 <<"\t" << 8*8 << "\t" << 8*8*8 << "\n";
    cout << 9 <<"\t" << 9*9 << "\t" << 9*9*9 << "\n";
    cout << 10 <<"\t" << 10*10 << "\t" << 10*10*10 << "\n";
    
    return 0;
}