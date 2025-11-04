/**
 * File: exercise_5_10_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Multiples) Write a function isMultiple that determines for a pair of integers 
 *                 whether the second is a multiple of the first. The function should take two 
 *                 integer arguments and return true if the second is a multiple of the first and 
 *                 false otherwise. Use this function in a program that inputs a series of pairs 
 *                 of integers.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 04-11-2025
 */

#include <iostream>
#include <format>

using namespace std;

bool isMultiple(int a, int b);

int main() {
    // processing and termination phase
    //───────────────────────────────────────────────────────────────────────────────────────────
    cout << "Enter two several integer numbers to test if the second integer is a multiple of "
            "the first integer.\n"
         << "Type the end-of-file (EOF) indicator to terminate input:\n"
         << "   On UNIX/Linux/macOS type <Ctrl> d then press Enter\n"
         << "   On Windows type <Ctrl> z then press Enter\n";
    
    cout << "\nIntegers (inputs) or shut down program (EOF indicator): ";
    
    int a{0}, b{0};
    
    while(cin >> a >> b ) {
        // call and execute function isMultiple() then display result
        cout << (isMultiple(a, b) ? format("{} is multiple of {}\n", b, a) :
                    format("{} is not multiple of {}\n", b, a));
        
        // next input prompt
        cout << "\nIntegers (inputs) or shut down program (EOF indicator): ";
    }

    cout << "End of input detected - Shutting down program\n";
    //───────────────────────────────────────────────────────────────────────────────────────────

    return 0;
}

bool isMultiple(int a, int b) {
    return (b % a == 0 ? true : false);
}