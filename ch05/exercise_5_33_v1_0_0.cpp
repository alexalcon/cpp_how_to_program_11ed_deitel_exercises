/**
 * File: exercise_5_33_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Math Library Functions) Write a program that tests the math library functions 
 *                 in Section 5.3’s table. Exercise each of these functions by having your program 
 *                 print out tables of return values for various argument values.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 23-11-2025
 */

#include <iostream>
#include <format>
#include <string>
#include <cmath>

void printSectionHeader(const std::string& title) {
    std::cout << std::format("\n---------- {} ----------\n", title);
}

void testCeil() {
    printSectionHeader("ceil(x)");

    double inputs[] = {9.2, -9.8, 0.0, 5.7};

    for (int i = 0; i < 4; ++i)
        std::cout << std::format("ceil({:.3f}) = {:.3f}\n", inputs[i], std::ceil(inputs[i]));
}

void testCos() {
    printSectionHeader("cos(x)");

    double inputs[] = {0.0, 3.14159 / 2, 3.14159};

    for (int i = 0; i < 3; ++i)
        std::cout << std::format("cos({:.5f}) = {:.5f}\n", inputs[i], std::cos(inputs[i]));
}

void testExp() {
    printSectionHeader("exp(x)");

    double inputs[] = {0.0, 1.0, 2.0};

    for (int i = 0; i < 3; ++i)
        std::cout << std::format("exp({:.1f}) = {:.6f}\n", inputs[i], std::exp(inputs[i]));
}

void testFabs() {
    printSectionHeader("fabs(x)");

    double inputs[] = {5.1, 0.0, -8.76};

    for (int i = 0; i < 3; ++i)
        std::cout << std::format("fabs({:.3f}) = {:.3f}\n", inputs[i], std::fabs(inputs[i]));
}

void testFloor() {
    printSectionHeader("floor(x)");

    double inputs[] = {9.2, -9.8, 5.7};

    for (int i = 0; i < 3; ++i)
        std::cout << std::format("floor({:.3f}) = {:.3f}\n", inputs[i], std::floor(inputs[i]));
}

void testFmod() {
    printSectionHeader("fmod(x, y)");

    double xs[] = {2.6, 9.5, -7.3};
    double ys[] = {1.2, 2.0, 2.0};

    for (int i = 0; i < 3; ++i)
        std::cout << std::format("fmod({:.3f}, {:.3f}) = {:.3f}\n", xs[i], ys[i], std::fmod(xs[i], ys[i]));
}

void testLog() {
    printSectionHeader("log(x)");

    double inputs[] = {1.0, 2.718282, 7.389056};

    for (int i = 0; i < 3; ++i)
        std::cout << std::format("log({:.6f}) = {:.6f}\n", inputs[i], std::log(inputs[i]));
}

void testLog10() {
    printSectionHeader("log10(x)");

    double inputs[] = {1.0, 10.0, 100.0};

    for (int i = 0; i < 3; ++i)
        std::cout << std::format("log10({:.1f}) = {:.1f}\n", inputs[i], std::log10(inputs[i]));
}

void testPow() {
    printSectionHeader("pow(x, y)");

    double xs[] = {2.0, 9.0, 5.0};
    double ys[] = {7.0, 0.5, 3.0};

    for (int i = 0; i < 3; ++i)
        std::cout << std::format("pow({:.3f}, {:.3f}) = {:.3f}\n", xs[i], ys[i], std::pow(xs[i], ys[i]));
}

void testSin() {
    printSectionHeader("sin(x)");

    double inputs[] = {0.0, 3.14159 / 2, 3.14159};

    for (int i = 0; i < 3; ++i)
        std::cout << std::format("sin({:.5f}) = {:.5f}\n", inputs[i], std::sin(inputs[i]));
}

void testSqrt() {
    printSectionHeader("sqrt(x)");

    double inputs[] = {0.0, 4.0, 9.0, 16.0};

    for (int i = 0; i < 4; ++i)
        std::cout << std::format("sqrt({:.1f}) = {:.3f}\n", inputs[i], std::sqrt(inputs[i]));
}

void testTan() {
    printSectionHeader("tan(x)");

    double inputs[] = {0.0, 3.14159 / 4, 3.14159 / 2};

    for (int i = 0; i < 3; ++i)
        std::cout << std::format("tan({:.5f}) = {:.5f}\n", inputs[i], std::tan(inputs[i]));
}

int main() {
    std::cout << "Math Library Function Tests\n";
    std::cout << "---------------------------\n";

    testCeil();
    testCos();
    testExp();
    testFabs();
    testFloor();
    testFmod();
    testLog();
    testLog10();
    testPow();
    testSin();
    testSqrt();
    testTan();

    return 0;
}