/**
 * File: exercise_5_28_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Visualizing Recursion) Modify the factorial function of Fig. 5.14 to print 
 *                 its local variable and recursive call parameter. For each recursive call, 
 *                 display the outputs on a separate line and add a level of indentation. Do 
 *                 your utmost to make the outputs clear, interesting and meaningful. Your goal 
 *                 here is to design and implement an output format that helps a person 
 *                 understand recursion better. You may want to add such display capabilities 
 *                 to the many other recursion examples and exercises throughout the text.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 20-11-2025
 */

#include <iostream>
#include <format>

#include <boost/multiprecision/cpp_int.hpp>

#include "cppintformatter.h"

using namespace std;
using boost::multiprecision::cpp_int;

cpp_int factorial(int number); // function prototype

int main() {
    for (int counter{0}; counter <= 10; ++counter) {
        cout << format("{:>2}! = {}\n", counter, factorial(counter));
        cout << "----------------------------------------------------\n";
    }
}

/// recursive factorial with recursion-visualization output
cpp_int factorial(int number) {
    static int depth = 0;                // tracks recursion depth
    const string indent(depth * 4, ' '); // 4 spaces per level

    cout << indent << format("-> call factorial({})\n", number);

    ++depth; // entering deeper call

    cpp_int result;
    if (number <= 1) {
        result = 1;
        --depth; // leaving call
        cout << indent << format("<- return {} (base case)\n", result);
        
        return result;
    } 
    else {
        result = number * factorial(number - 1);
        --depth; // leaving call
        cout << indent << format("<- return {} ({} * factorial({}))\n",
                                 result, number, number - 1);
        
        return result;
    }
}