/**
 * File: exercise_4_23_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Replacing continue with a Structured Equivalent) Describe in general how you’d
 *                 remove any continue statement from a loop in a program and replace it with some 
 *                 structured equivalent. Use the technique you develop here to remove the continue
 *                 statement from the program in Fig. 4.9. 
 * -------------------------------------------------------------------------------------------------
 * Created on: 22-02-2025
 */

#include <iostream>

using namespace std;

int main() {
    for (int count{1}; count <= 10; ++count) {
        if (count != 5) {
            cout << count << " ";
        }
    } 

    cout << "\nSkipped printing 5 without using continue.\n";

    return 0;
}