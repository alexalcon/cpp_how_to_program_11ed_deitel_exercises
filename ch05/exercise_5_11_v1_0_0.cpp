/**
 * File: exercise_5_11_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Even Numbers) Write a program that inputs a series of integers and passes them 
 *                 one at a time to function isEven, which uses the remainder operator to determine 
 *                 whether an integer is even. The function should take an integer argument and 
 *                 return true if the integer is even and false otherwise.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 04-11-2025
 */

#include <iostream>
#include <format>

using namespace std;

bool isEven(int a);

int main() {
    // processing and termination phase
    //─────────────────────────────────────────────────────────────────────────
    cout << "Enter several integer numbers to test if they are even or not\n" 
         << "Type the end-of-file (EOF) indicator to terminate input:\n"
         << "   On UNIX/Linux/macOS type <Ctrl> d then press Enter\n"
         << "   On Windows type <Ctrl> z then press Enter\n";
    
    cout << "\nInteger (input) or shut down program (EOF indicator): ";
    
    int a{0};
    
    while(cin >> a) {
        // call and execute function isEven() then display result
        cout << (isEven(a) ? format("{} is even\n", a) :
        format("{} is not even\n", a));
        
        // next input prompt
        cout << "\nIntegers (inputs) or shut down program (EOF indicator): ";
    }
    
    cout << "End of input detected - Shutting down program\n";
    //─────────────────────────────────────────────────────────────────────────

    return 0 ;
}

bool isEven(int a) {
    return ( a % 2 == 0 ? true : false);
}