/**
 * File: exercise_5_01_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ 
 * Description: Show the value of x after each of the following statements is performed:
 * 
 *                  a) x = fabs(7.5);
 *                  b) x = floor(7.5);
 *                  c) x = fabs(0.0);
 *                  d) x = ceil(0.0);
 *                  e) x = fabs(-6.4);
 *                  f) x = ceil(-6.4);
 *                  g) x = ceil(-fabs(-8 + floor(-5.5)));
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 24-10-2025
 */

#include <iostream>
#include <cmath>
#include <format>

using namespace std;

int main() {
    double x{7.5}; // math function argument
    double y{0.0}; // math function result/value

    // ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
    // basic math functions demonstration
    // ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
    // ───────────────────────────────────────────────────────────────────
    // a) absolute value of 'x'
    y = fabs(x);
    cout << format("fabs({}): {:.1f}", x, y) << endl; 
    
    // b) rounds 'x' to the largest integer not greater than 'x'
    y = floor(x);
    cout << format("floor({}): {:.0f}", x, y) << endl; 
    
    // c) absolute value of 'x'
    x = 0.0;
    y = fabs(x);
    cout << format("fabs({:.1f}): {:.1f}", x, y) << endl; 
    
    // d) rounds 'x' to the smallest integer not less than 'x' 
    y = ceil(x);
    cout << format("ceil({:.1f}): {:.0f}", x, y) << endl; 
    
    // e) absolute value of 'x'
    x = -6.4;
    y = fabs(x);
    cout << format("fabs({}): {:.1f}", x, y) << endl; 
    
    // f) rounds 'x' to the smallest integer not less than 'x'
    y = ceil(x);
    cout << format("ceil({}): {:.0f}", x, y) << endl; 
    
    // g) rounds '-fabs(-8 + floor(x))' to the smallest 
    //    integer not less than '-fabs(-8 + floor(x))'
    x = -5.5;
    y = ceil(-fabs(-8 + floor(x)));
    cout << format("ceil(-fabs(-8 + floor({}))): {:.0f}", x, y) << endl; 
    // ───────────────────────────────────────────────────────────────────

    return 0;
}
    