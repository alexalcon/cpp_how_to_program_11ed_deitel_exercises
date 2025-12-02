/**
 * File: exercise_5_37_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Pass-by-Value vs. Pass-by-Reference) Write a complete C++ 
 *                 program with two alternate functions described below, each of 
 *                 which simply triples the variable count defined in main. Then 
 *                 compare and contrast the two approaches.
 *
 *                 a) function tripleByValue(count):
 *                       - receives count by value
 *                       - triples the copy
 *                       - returns the new value
 *
 *                 b) function tripleByReference(count):
 *                       - receives count by reference
 *                       - triples the original count through its alias 
 *                         (the reference parameter)
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 02-12-2025
 */

#include <format>
#include <iostream>

using namespace std;

// prototypes
int tripleByValue(int count);       // pass-by-value version
void tripleByReference(int& count); // pass-by-reference version

int main() {
    int count{5};

    cout << format("Initial count value: {}\n\n", count);

    // call tripleByValue
    const int value_result{tripleByValue(count)};
    cout << format("After tripleByValue(count):\n");
    cout << format("Returned value = {}\n", value_result);
    cout << format("count in main = {} (unchanged)\n\n", count);

    // call tripleByReference
    tripleByReference(count);
    cout << "After tripleByReference(count):\n";
    cout << format("count in main = {} (modified)\n", count);
}

// receives a copy of count, triples the copy, returns the triple
int tripleByValue(int count) {
    count = count * 3;
    return count;
}

// receives count by reference (alias), modifies the original
void tripleByReference(int& count) {
    count = count * 3;
}