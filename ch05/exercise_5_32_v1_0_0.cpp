/**
 * File: exercise_5_32_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ After determining what the program of Exercise 5.31 does, modify the program to 
 *                 function properly after removing the restriction that the second argument be 
 *                 nonnegative.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 23-11-2025
 */

/**
 * Problems with exercise 4.31 recursion algorithm
 * 
 *      - If b == 0 → it never hits b == 1, so recursion goes:
 *          mystery(a, 0) → mystery(a, -1) → mystery(a, -2) → ... → infinite recursion
 *      - If b < 0 → it keeps decreasing (b - 1) forever → infinite recursion
 * 
 * So we must:
 * 
 *      - Define what multiplication means when b = 0 and b < 0.
 *      - Reflect that in the recursion in a way that always gets closer to a base case.
 */

#include <iostream>

using namespace std;

int mystery(int, int); // function prototype
      
int main() {
   cout << "Enter two integers: ";
   int x{0};
   int y{0};
   cin >> x >> y;
   cout << "The result is " << mystery(x, y) << endl;
} 
   
// extended version: works for any integer b
int mystery(int a, int b) {
    // 1) base case: multiply by 0
    if (b == 0) {
        return 0; // a * 0 = 0
    }

    // 2) positive case: repeated addition
    if (b > 0) {
        return a + mystery(a, b - 1); // a * b = a + a * (b - 1)
    }

    // 3) negative case: use sign rule: 
    //      a * b = - (a * (-b))  for b < 0
    return -mystery(a, -b);
}