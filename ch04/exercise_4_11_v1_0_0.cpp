/**
 * File: exercise_4_11_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Triangle-Printing Program) Write an application that displays the following 
 *                 patterns separately, one below the other. Use for loops to generate the patterns.
 *                 All asterisks (*) should be printed by a single statement of the form cout << '*'
 *                 which causes the asterisks to print side by side. A statement of the form cout 
 *                 << '\n' can be used to move to the next line. A statement of the form cout << ' '
 *                 can be used to display a space for the last two patterns. There should be no 
 *                 other output statements in the program. [Hint: The last two patterns require 
 *                 that each line begin with an appropriate number of blank spaces.]  
 * 
 *                      (a)                 (b)                 (c)                 (d)
 *                      *                   **********          **********                   *
 *                      **                  *********            *********                  **
 *                      ***                 ********              ********                 *** 
 *                      ****                *******                *******                ****
 *                      *****               ******                  ******               *****
 *                      ******              *****                    *****              ******
 *                      *******             ****                      ****             *******
 *                      ********            ***                        ***            ********
 *                      *********           **                          **           *********
 *                      **********          *                            *          **********
 * -------------------------------------------------------------------------------------------------
 * Created on: 03-02-2025
 */

#include <iostream>
#include <format>

using namespace std;

int main() {
    // patern a)
    cout << "Pattern a)\n";
    cout << "----------\n";
    int column_counter{1};
    for (int row{0} ; row < 10 ; ++row) {
        for (int column{0} ; column < column_counter ; ++column) {
            cout << "*";
        }
        ++column_counter;
        cout << "\n";
    }
    cout << "\n";

    // patern b)
    cout << "Pattern b)\n";
    cout << "----------\n";
    column_counter = 10;
    for (int row{0} ; row < 10 ; ++row) {
        for (int column{0} ; column < column_counter ; ++column) {
            cout << "*";
        }
        --column_counter;
        cout << "\n";
    }
    cout << "\n";

    // patern c)
    cout << "Pattern c)\n";
    cout << "----------\n";
    column_counter = 10;
    // blank spaces filling 
    for (int row{0} ; row < 10 ; ++row) {
        for (int space_counter{0}; space_counter < row ; ++space_counter) {
            cout << " ";
        }
    
    // asterisks filling 
        for (int column{0} ; column < column_counter ; ++column) {
            cout << "*";
        }
        --column_counter;
        cout << "\n";
        
    }
    cout << "\n";

    // patern d)
    cout << "Pattern d)\n";
    cout << "----------\n";
    column_counter = 10;
    for (int row{0} ; row < 10 ; ++row) {
        // blank spaces filling 
        for (int space_counter{0}; space_counter < (column_counter - 1) ; ++space_counter) {
            cout << " ";
        }
        
        // asterisks filling 
        for (int column{0} ; column < (row + 1) ; ++column) {
            cout << "*";
        }
        --column_counter;
        cout << "\n";
        
    }

    return 0;
}