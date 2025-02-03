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
    cout << "Pattern a)\n\n";
    int column_counter{1};
    for (int row{0} ; row < 10 ; ++row) {
        for (int column{0} ; column < column_counter ; ++column) {
            cout << "*";
        }
        ++column_counter;
        cout << "\n";
    }
    cout << "\n";

    return 0;
}