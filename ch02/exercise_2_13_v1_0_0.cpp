/**
 * File: exercise_2_13_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * ----------------------------------------------------------------------------------------------
 * Description: (Printing) Write a program that prints the numbers 1 to 4 on the same line with
 *              each pair of adjacent numbers separated by one space. Do this in several ways:
 *           
 *                  a) Using one statement with one stream insertion operator.
 *                  b) Using one statement with four stream insertion operators.
 *                  c) Using four statements.
 * ----------------------------------------------------------------------------------------------
 * Created on: 29-02-2024
 */

#include <iostream>

using namespace std;

int main() {
    // a) using one statement with one stream insertion operator
    cout << "1 2 3 4\n";

    // b) using one statement with four stream insertion operators
    cout << "1 " << "2 " << "3 " << "4\n";

    // c) using four statements
    cout << "1 ";
    cout << "2 ";
    cout << "3 ";
    cout << "4\n";

    return 0;
}