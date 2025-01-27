/**
 * File: exercise_3_12_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * ----------------------------------------------------------------------------------
 * Description: (What Does This Program Do?) What does the following program print? 
 * ----------------------------------------------------------------------------------
 * Created on: 24-12-2024
 */

#include <iostream>

using namespace std;

int main() {
    int row{10};
    while (row >= 1) {
        int column{1};
        while (column <= 10) {
            cout << (row % 2 == 1 ? "<" : ">");
            ++column;
        }
        --row;
        cout << "\n";
    } 
}