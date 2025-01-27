/**
 * File: exercise_3_11_v1_0_0.cpp
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
    int count{1};
    while (count <= 10) {
        cout << (count % 2 == 1 ? "****" : "++++++++") << "\n";
        ++count;
    } 
}