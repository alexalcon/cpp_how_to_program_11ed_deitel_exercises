/**
 * File: exercise_4_11_v1_1_0.cpp
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
 * Created on: 17-02-2025
 */

#include <iostream>

using namespace std;

int main() {
    int n{10}; // number of rows

    // patern a) - increasing stars
    cout << "Pattern a)\n";
    for (int i{1} ; i <= n ; ++i) cout << "-";
    cout << "\n";
    for (int row{1} ; row <= n ; ++row) {
        for (int column{1} ; column <= n ; ++column) {
            cout << (column <= row ? "*" : " ");
        }
        cout << "\n";
    }

    cout << "\n";

    // patern b) - decreasing stars
    cout << "Pattern b)\n";
    for (int i{1} ; i <= n ; ++i) cout << "-";
    cout << "\n";
    for (int row{1} ; row <= n ; ++row) {
        for (int column{n} ; column >= 1 ; --column) {
            cout << (column >= row ? "*" : " ");
        }
        cout << "\n";
    }

    cout << "\n";

    // patern c) - right-aligned decreasing stars
    cout << "Pattern c)\n";
    for (int i{1} ; i <= n ; ++i) cout << "-";
    cout << "\n";
    for (int row{1} ; row <= n ; ++row) {
        for (int column{1} ; column < row ; ++column) { // spaces before stars
            cout << " ";
        }
        for (int column{n} ; column >= row ; --column) {
            cout << "*";
        }
        cout << "\n";
    }
    
    cout << "\n";
    
    // patern d) - right-aligned increasing stars
    cout << "Pattern d)\n";
    for (int i{1} ; i <= n ; ++i) cout << "-";
    cout << "\n";
    for (int row{1} ; row <= n ; ++row) {
        for (int column{n} ; column > row; --column) { // spaces before stars 
            cout << " ";
        }  
        for (int column{1} ; column <= row; ++column) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
