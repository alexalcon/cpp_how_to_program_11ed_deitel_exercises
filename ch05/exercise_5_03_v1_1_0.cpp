/**
 * File: exercise_5_03_v1_1_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: (Rounding Numbers) An application of function floor is rounding a value to the 
 *              nearest integer. The statement
 *              
 *                  y = floor(x + 0.5);
 *
 *              rounds the number x to the nearest integer and assigns the result to y. Write a 
 *              program that reads several numbers and uses the preceding statement to round 
 *              each of these numbers to the nearest integer. For each number processed, print 
 *              both the original number and the rounded number.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 24-10-2025
 */

#include <iostream>
#include <cmath>
#include <format>

using namespace std;

int main() {
    // initialization phase
    double y{0.0}; // rounded number result/value
    
    // processing phase
    //───────────────────────────────────────────────────────────────────────────────────
    cout << "Enter several real numbers to be rounded "
    "to the nearest integer (non-numeric to end).\n" 
    << "Type the end-of-file (EOF) indicator to terminate input:\n"
    << "   On UNIX/Linux/macOS type <Ctrl> d then press Enter\n"
    << "   On Windows type <Ctrl> z then press Enter\n";
    
    cout << "\nNumber to be rounded (input) or shut down program (EOF indicator): ";
    
    double x{}; // number to be rounded
    
    // sentinel-controlled iteration     
    while (cin >> x) {
        // calculate rounded numbers and display results
        // the floor(x) function rounds 'x' to the largest integer not greater than 'x'
        y = floor(x + 0.5);
        cout << format("floor({} + 0.5) = {:>.0f}", x, y) << endl;
        
        // next input prompt
        cout << "Number to be rounded (input) or shut down program (EOF indicator): ";
    }

    cout << "End of input detected - shutting down program.\n";
    //───────────────────────────────────────────────────────────────────────────────────

    return 0;
}