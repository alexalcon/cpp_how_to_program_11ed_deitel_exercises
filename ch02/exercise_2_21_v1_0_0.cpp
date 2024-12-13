/**
 * File: exercise_2_21.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------
 * Description: (Checkerboard Pattern) Display the following checkerboard pattern with eight
 *              output statements, then display the same pattern using as few statements as 
 *              possible.
 * 
 *              * * * * * * * *
 *               * * * * * * * *
 *              * * * * * * * *
 *               * * * * * * * *
 *              * * * * * * * *
 *               * * * * * * * *
 *              * * * * * * * *
 *               * * * * * * * *
 * -------------------------------------------------------------------------------------------
 * Created on: 29-02-2024
 */

#include <iostream>

using namespace std;

int main() {
    // eight statements
    cout << "* * * * * * * *\n";
    cout << " * * * * * * * *\n";
    cout << "* * * * * * * *\n";
    cout << " * * * * * * * *\n";
    cout << "* * * * * * * *\n";
    cout << " * * * * * * * *\n";
    cout << "* * * * * * * *\n";
    cout << " * * * * * * * *";

    cout << "\n\n";
    
    // few statements
    cout << "* * * * * * * *\n" << " * * * * * * * *\n";
    cout << "* * * * * * * *\n" << " * * * * * * * *\n";
    cout << "* * * * * * * *\n" << " * * * * * * * *\n";
    cout << "* * * * * * * *\n" << " * * * * * * * *\n";
    
    return 0;
} // end function main