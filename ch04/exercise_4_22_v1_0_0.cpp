/**
 * File: exercise_4_22_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * ---------------------------------------------------------------------------------------
 * Description: ✰ (What Does This Code Do?) What does the following program segment do?
 * ---------------------------------------------------------------------------------------
 * Created on: 17-02-2025   
 */

#include <iostream>

using namespace std;

int main() {
    // print five 3x4 matrices of "*"
    for(int i{1} ; i <= 5 ; i++) {
        for (int j{1} ; j <= 3 ; j++) {
            for (int k{1} ; k <= 4 ; k++) {
                cout << '*';
            }
            cout << '\n'; 
        }
        // cout << '*';
        cout << i;
        cout << '\n'; 
    }

    return 0;
}