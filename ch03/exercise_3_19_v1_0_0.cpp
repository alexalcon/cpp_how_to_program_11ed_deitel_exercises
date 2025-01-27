/**
 * File: exercise_3_19_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: (Checkerboard Pattern of Asterisks) Write a program that displays the following
 *              checkerboard pattern. Your program must use only three output statements, one of 
 *              each of the following forms:
 *                  
 *                  cout << "* ";
 *                  cout << ' ';
 *                  cout << "\n";
 * 
 *                  * * * * * * * *
 *                   * * * * * * * *
 *                  * * * * * * * *
 *                   * * * * * * * *
 *                  * * * * * * * *
 *                   * * * * * * * *
 *                  * * * * * * * *
 *                   * * * * * * * *
 * -------------------------------------------------------------------------------------------------
 * Created on: 29-12-2024
 */

#include <iostream>

using namespace std;

int main() {
    // initialization phase
    int size{8};
    int row{0}; 

    // processing phase
    // main logic: matrix column filling logic
    while (row < size) {
        int column{0};

        if (row % 2 == 1) { // check for an odd row
            cout << ' '; // add an initial space
        } 

        while (column < size) {
            cout << "* ";
            column++; // move to the next column
        }

        row++; // move to the next row

        // finish the cursor to the last row character
        if (row != size) { 
            cout << "\n";
        }
    }

    return 0;

}

