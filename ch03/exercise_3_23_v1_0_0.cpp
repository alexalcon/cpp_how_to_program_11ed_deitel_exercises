/**
 * File: exercise_3_23_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: (Sides of a Triangle) Write a program that reads three nonzero double values and    
 *              determines and prints whether they could represent the sides of a triangle.
 * -------------------------------------------------------------------------------------------------
 * Created on: 30-12-2024
 */

#include <iostream>
#include <iomanip>

int main() {
    // initialization phase
    double a, b, c; // triangle sides
    std::cout << "Enter triangle sides: ";
    std::cin >> a >> b >> c;

    // processing phase: checking certain conditions
    //-------------------------------------------------------
    // show results (with four digits of precision)
    std::cout << std::setprecision(4) << std::fixed;
    
    // main logic
    // triangle inequality theorem (sufficient condition)
    // also stated as theorem of existence of a triangle
    //*****************************************************
    if ((b + c) > a) {
        if ((a + c) > b) {
            if ((a + b) > c) {
                std::cout << "\nThe sides: " << a << " " 
                                           << b << " " 
                                           << "and " << c
                            << " represent a triangle.";          
            } else {
                std::cout << "\nThe sides: " << a << " " 
                                           << b << " " 
                                           << "and " << c
                     << " do not represent a triangle.";         
            }
        } else {
            std::cout << "\nThe sides: " << a << " " 
                                           << b << " " 
                                           << "and " << c
                     << " do not represent a triangle.";    

        }
    } else {
        std::cout << "\nThe sides: " << a << " " 
                                           << b << " " 
                                           << "and " << c
                     << " do not represent a triangle.";    
    }
    //*****************************************************
    //-------------------------------------------------------
    
    return 0;
}


/**************************************************************************
 * Side Note:                                                             *
 *                                                                        *
 * The Triangle Inequality Theorem is fundamental in determining whether  *
 * three given values can represent the sides of a triangle. It states    *
 * that the sum of the lengths of any two sides of a triangle must be     *
 * greater than the length of the third side.                             *
 *                                                                        *
 * 1. Sufficient Condition (Basic Form):                                  *
 *    For any three sides a, b, and c to form a triangle, they must       *
 *    satisfy the following inequalities:                                 *
 *                                                                        *
 *        a + b > c,                                                      *
 *        b + c > a,                                                      *
 *        c + a > b.                                                      *
 *                                                                        *
 *    If any of these conditions fail, the values do not form a triangle. *
 *                                                                        *
 * 2. Necessary and Sufficient Condition (Expanded Form):                 *
 *    To ensure both sufficiency and necessity, the inequalities can be   *
 *    expanded to account for the absolute differences of the sides:      *
 *                                                                        *
 *        |a - b| < c < a + b,                                            *
 *        |b - c| < a < b + c,                                            *
 *        |c - a| < b < c + a.                                            *
 *                                                                        *
 *    This form guarantees that the sides not only close to form a        *
 *    triangle but also ensures uniqueness of the triangle in geometric   *
 *    terms.                                                              *
 *                                                                        *
 * For further details, refer to mathematical literature such as          *
 * "Geometría" by Radmila Bulajich Manfrino and José Antonio Gómez        *
 * Ortega, Chapter 1: Geometría Elemental Plana, Section 1.3: Dos Hechos  *
 * Fundamentales Sobre Triángulos. Specifically, see Theorem 1.3.4        *
 * (La Desigualdad del Triángulo) for the Triangle Inequality, and        *
 * Theorem 1.3.5 for its converse. These theorems provide a rigorous      *
 * foundation for understanding the properties of triangles.              *
 **************************************************************************/