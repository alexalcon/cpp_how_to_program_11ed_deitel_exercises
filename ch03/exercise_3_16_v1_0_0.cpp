/**
 * File: exercise_3_16_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Square of Asterisks) Write a program that inputs the size of a square’s side, 
 *                 then prints a hollow square of that size using asterisks and blanks. Your 
 *                 program should work for squares of all side sizes between 1 and 20. For example, 
 *                 if your program reads a size of 5, it should print
 *                  
 *                      *****
 *                      *   *
 *                      *   *
 *                      *   *
 *                      *****
 * -------------------------------------------------------------------------------------------------
 * Created on: 24-12-2024
 */

#include <iostream>

using namespace std;

int main() {
    // initialization phase
    int square_size{8};
    int row{0}; 

    // processing phase
    // main logic: matrix column filling logic
    while (row < square_size) {
        int column{0}; 
        
        while (column < square_size) {
            if (row == 0) { // first row
                cout << "*";
            }
            else if(row == (square_size - 1)) { // last row
                cout << "*";
            }
            else if(column == 0) { // first column
                cout << "*";
            }
            else if(column == (square_size - 1)) { // last column
                cout << "*";
            }
            else { // hollow square
                cout << " ";
            }
            column++; // move to the next column
        }

        row++; // move to the next row
        
        // finish the cursor to the last row character
        if (row != square_size) { 
            cout << "\n";
        }
    }
    
    return 0;
}