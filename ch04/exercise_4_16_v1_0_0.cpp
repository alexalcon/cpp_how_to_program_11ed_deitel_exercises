/**
 * File: exercise_4_16_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Pythagorean Triples) A right triangle can have sides whose lengths are all 
 *                 integers. The set of three integer values for the lengths of the sides of a 
 *                 right triangle is called a Pythagorean triple. The lengths of the three sides
 *                 must satisfy the relationship that the sum of the squares of two of the sides
 *                 is equal to the square of the hypotenuse. Write an application that displays a 
 *                 table of the Pythagorean triples for side1, side2 and the hypotenuse, all no 
 *                 larger than 500. Use a triple-nested for loop that tries all possibilities. This
 *                 is an example of “brute-force” computing. You’ll learn in more advanced 
 *                 computer-science courses that for many interesting problems, there’s no known 
 *                 algorithmic approach other than using sheer brute force.
 * -------------------------------------------------------------------------------------------------
 * Created on: 17-02-2025
 */

 #include <iostream>
 #include <format>
 
 int main() {
     std::cout << "Pythagorean Triples (a, b, c) where a^2 + b^2 = c^2\n\n";
     std::cout << "-----------------\n";
     std::cout << std::format("{:>3}{:>6}{:>6}\n", "a", "b", "c");
     std::cout << "-----------------\n";
     
     // triple-nested loops to find all valid combined triples 
     // iterate through all combinations of a, b, and c from 1 to 500.
     /**
      * in the second for statement, start from 'a' to 
      * avoid duplicates like (3,4,5) and (4,3,5)
      */
     for (int a = 1; a <= 500; ++a) {
         for (int b = a; b <= 500; ++b) {
            for (int c = b; c <= 500; ++c) {
                // check Pythagorean Condition
                if ((a * a) + (b * b) == (c * c)) {
                    std::cout << std::format("{:>3}{:>6}{:>6}\n", a, b, c);
                }
             }
         }
     }
 
     return 0;
 }