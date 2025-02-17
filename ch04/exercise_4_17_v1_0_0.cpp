/**
 * File: exercise_4_17_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Modified Triangle-Printing Program) Modify Exercise 4.11 to combine your code 
 *                 from the four separate triangles of asterisks such that all four patterns print 
 *                 side by side. [Hint: Make clever use of nested for loops.] 
 * -------------------------------------------------------------------------------------------------
 * Created on: 17-02-2025
 */

#include <iostream>

using namespace std;

// Version exercise_4_11_v1_1_0.cpp was used for the solution of this exercise.
int main() {
    int n{25}; // number of rows

    // loop through each row
    for (int row{1} ; row <= n ; ++row) {
        // print each pattern side-by-side in columns
        // pattern a) - increasing stars
        for (int column{1} ; column <= n ; ++column) {
            cout << (column <= row ? "*" : " ");
        }
        cout << "";
        
        // pattern b) - decreasing stars
        for (int column{n} ; column >= 1 ; --column) {
            cout << (column >= row ? "*" : " ");
        }
        cout << "";

        // pattern c) - right-aligned decreasing stars
        for (int column{1} ; column < row ; ++column) { // spaces before stars
            cout << " ";
        }
        for (int column{n} ; column >= row ; --column) {
            cout << "*";
        }
        cout << "";

        // pattern d) - right-aligned increasing stars
        for (int column{n} ; column > row; --column) { // spaces before stars 
            cout << " ";
        }  
        for (int column{1} ; column <= row; ++column) {
            cout << "*";
        }

        cout << "\n"; // move to next line
    }

    return 0;
}