/**
 * File: exercise_3_13_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: (Dangling-else Problem) C++ compilers always associate an 'else' with the 
 *              immediately preceding 'if' unless told to do otherwise by the placement of braces 
 *              ({ and }). This behavior can lead to what is referred to as the dangling-else 
 *              problem. The indentation of the nested statement:
 *              
 *              if (x > 5)
 *                  if (y > 5)
 *                      cout << "x and y are > 5";
 *              else
 *                  cout << "x is <= 5";
 * 
 *              appears to indicate that if 'x' is greater than 5, the nested 'if' statement
 *              determines whether 'y' is also greater than 5. If so, the statement outputs
 *              the string "x and y are > 5". Otherwise, it appears that if 'x' is not greater
 *              than 5, the 'else' part of the 'if...else' outputs the string "x is <= 5". Beware! 
 *              This nested 'if...else' statement does not execute as it appears. The compiler 
 *              actually interprets the statement as:
 *              
 *              if (x > 5)
 *                  if (y > 5)
 *                      cout << "x and y are > 5";
 *                  else
 *                      cout << "x is <= 5";
 *              
 *              In this version, the body of the first 'if' is a nested 'if...else'. The outer
 *              'if' statement tests whether 'x' is greater than 5. If so, execution continues
 *              by testing whether 'y' is also greater than 5. If the second condition is true,
 *              the program prints "x and y are > 5". However, if the second condition is false,
 *              the string "x is <= 5" is displayed, even though we know that 'x' is greater than 
 *              5. Equally bad, if the outer 'if' statement’s condition is false, the inner 
 *              'if...else' is skipped, and nothing is displayed. For this exercise, add braces 
 *              to the preceding code snippet to force the nested 'if...else' statement to execute
 *              as originally intended.
 * -------------------------------------------------------------------------------------------------
 * Created on: 24-12-2024
 */

#include <iostream>

int main() {
    int x{6};
    int y{4};

    // code with dangling-else issue
    if (x > 5)
        if (y > 5)
            std::cout << "x and y are > 5\n";
    else
        std::cout << "x <= 5\n";

    // code with dangling-else issue
    if (x > 5)
        if (y > 5)
            std::cout << "x and y are > 5\n";
        else
            std::cout << "x <= 5\n";

    // corrected code using braces
    if (x > 5) {
        if (y > 5) {
            std::cout << "x and y are > 5\n";
        }
    } 
    else {
        std::cout << "x <= 5\n";
    }
    
    return 0;
}