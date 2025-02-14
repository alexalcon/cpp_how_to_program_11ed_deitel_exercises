/**
 * File: exercise_4_06_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * ----------------------------------------------------------------------------
 * Description: (What Does This Code Do?) What does the following program do?
 * ----------------------------------------------------------------------------
 * Created on: 31-01-2025
 */

#include <iostream>

using namespace std;

int main() {
    // a 10 x 5 matrix of @ elements
    for (int i{1} ; i <= 10 ; i++) {
        for (int j{1} ; j <= 5 ; j++) {
            cout << '@';
        }
        
        cout << "\n";
    }

    return 0;
}