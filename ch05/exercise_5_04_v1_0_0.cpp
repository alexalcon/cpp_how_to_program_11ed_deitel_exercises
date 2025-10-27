/**
 * File: exercise_5_04_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Rounding Numbers) Function floor can be used to round a number to a specific 
 *                 decimal place. The statement
 *                               
 *                      y = floor(x * 10 + 0.5) / 10;
 * 
 *                 rounds x to the tenths position (the first position to the right of the decimal 
 *                 point). The statement
 * 
 *                      y = floor(x * 100 + 0.5) / 100;
 * 
 *                 rounds x to the hundredths position (the second position to the right of the 
 *                 decimal point). Write a program that defines four functions to round a number x 
 *                 in various ways:
 * 
 *                      a) roundToInteger(number)
 *                      b) roundToTenths(number)
 *                      c) roundToHundredths(number)
 *                      d) roundToThousandths(number)
 * 
 *                 For each value read, your program should print the original value, the number 
 *                 rounded to the nearest integer, the number rounded to the nearest tenth, the 
 *                 number rounded to the nearest hundredth and the number rounded to the nearest 
 *                 thousandth.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 27-10-2025
 */

#include <iostream>
#include <cmath>
#include <format>

double roundToInteger(double x);
double roundToTenths(double x);
double roundToHundredths(double x);
double roundToThousandths(double x);

using namespace std;

int main() {
    // initialization phase
    double y{0.0}; // rounded number result/value

    // processing phase
    //──────────────────────────────────────────────────────────────────────────────────────────────
    cout << "Enter several real numbers to be rounded.\n"
         << "Type the end-of-file (EOF) indicator to terminate input:\n"
         << "   On UNIX/Linux/macOS type <Ctrl> d then press Enter\n"
         << "   On Windows type <Ctrl> z then press Enter\n";
    
    cout << "\nNumber to be rounded (input) or shut down program (EOF indicator): ";
    
    double x{}; // number to be rounded
    
    while (cin >> x) {
        // calculate rounded numbers and display results
        cout << "-------------------------------------------------------------------"
             << "----------------\n";
        y = roundToInteger(x);
        cout << format("Original number to be rounded: {} + 0.5 = {}", x, x + 0.5) << endl;
        cout << format("Rounded to integer: floor({} + 0.5) = {:>.0f}", x, y) << endl;

        y = roundToTenths(x);
        cout << format("Original number to be rounded: ({} * 10 + 0.5) / 10 = {}", 
                            x, (x * 10 + 0.5) / 10) << endl;
        cout << format("Rounded to the tenths position: floor({} * 10 + 0.5) / 10 = {:>.1f}", 
                            x, y) << endl;

        y = roundToHundredths(x);
        cout << format("Original number to be rounded: ({} * 100 + 0.5) / 100 = {}", 
                            x, (x * 100 + 0.5) / 100) << endl;
        cout << format("Rounded to the hundredths position: floor({} * 100 + 0.5) / 100 = {:>.2f}", 
                            x, y) << endl;
                            
        y = roundToThousandths(x);
        cout << format("Original number to be rounded: ({} * 1000 + 0.5) / 1000 = {}", 
                            x, (x * 1000 + 0.5) / 1000) << endl;
        cout << format("Rounded to the thousandths position: floor({} * 1000 + 0.5) / 1000 "  
                            "= {:>.3f}", x, y) << endl;
        cout << "-------------------------------------------------------------------"
             << "----------------\n";
        
        // next input prompt
        cout << "\nNumber to be rounded (input) or shut down program (EOF indicator): ";
    }

    cout << "End of input detected - shutting down program.\n";
    //──────────────────────────────────────────────────────────────────────────────────────────────
    
    return 0;
}

double roundToInteger(double x) {
    return (floor(x + 0.5));
}

double roundToTenths(double x) {
    return (floor(x * 10 + 0.5) / 10);
}

double roundToHundredths(double x) {
    return (floor(x * 100 + 0.5) / 100);
}

double roundToThousandths(double x) {
    return (floor(x * 1000 + 0.5) / 1000);
}