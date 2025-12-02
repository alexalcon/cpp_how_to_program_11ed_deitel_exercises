/**
 * File: exercise_5_38_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Unary Scope Resolution Operator) What’s the purpose of the 
 *                 unary scope resolution operator?
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 02-12-2025
 */

/**
 * C++ provides the unary scope resolution operator (::) to access a global variable when a
 * local variable of the same name is in scope. The unary scope resolution operator cannot be
 */

#include <iostream>

using namespace std;

int system_mode{0}; // global variable

void configure() {
    int system_mode{1}; // local variable that hides the global
    cout << "Local system_mode: " << system_mode << "\n";
    cout << "Global system_mode: " << ::system_mode << "\n"; // using ::
}

int main() {
    configure();
}