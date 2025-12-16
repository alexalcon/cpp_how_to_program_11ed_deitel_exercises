/**
 * File: exercise_4_18_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: (De Morgan’s Laws) This chapter introduced the logical operators &&, || and !. 
 *              De Morgan’s laws can sometimes make it more convenient for us to express a logical
 *              expression. These laws state that the expression !(condition1 && condition2) is 
 *              logically equivalent to the expression (!condition1 || !condition2). Also, the 
 *              expression !(condition1 || condition2) is logically equivalent to the expression 
 *              (!condition1 && !condition2). Use De Morgan’s laws to write equivalent expressions 
 *              for each of the following, then write an application to show that both the original 
 *              expression and the new expression in each case produce the same value:
 * 
 *                  a) !(x < 5) && !(y >= 7)
 *                  b) !(a == b) || !(g != 5)
 *                  c) !((x <= 8) && (y > 4))
 *                  d) !((i > 4) || (j <= 6))       
 * -------------------------------------------------------------------------------------------------
 * Created on: 17-02-2025
 */

#include <iostream>

using namespace std;

int main() {
    // sample values to test
    int x = 4, y = 7, a = 3, b = 3, g = 5, i = 5, j = 6;

    // original and equivalent expressions
    bool exprA_original = !(x < 5) && !(y >= 7);
    bool exprA_new = (x >= 5) && (y < 7);

    bool exprB_original = !(a == b) || !(g != 5);
    bool exprB_new = (a != b) || (g == 5);

    bool exprC_original = !((x <= 8) && (y > 4));
    bool exprC_new = (x > 8) || (y <= 4);

    bool exprD_original = !((i > 4) || (j <= 6));
    bool exprD_new = (i <= 4) && (j > 6);

    // display results
    cout << "Checking De Morgan's Laws equivalences:\n";
    cout << "a) " << (exprA_original == exprA_new ? "Equivalent" : "Not Equivalent") << endl;
    cout << "b) " << (exprB_original == exprB_new ? "Equivalent" : "Not Equivalent") << endl;
    cout << "c) " << (exprC_original == exprC_new ? "Equivalent" : "Not Equivalent") << endl;
    cout << "d) " << (exprD_original == exprD_new ? "Equivalent" : "Not Equivalent") << endl;

    return 0;
}