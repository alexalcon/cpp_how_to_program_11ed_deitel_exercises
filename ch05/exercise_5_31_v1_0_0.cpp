/**
 * File: exercise_5_31_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ What does the following program do?
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 23-11-2025
 */

// ex05_31.cpp
// What does this program do?
// answer: it implements a recursion algorithm
// for the multiplication of two input integers
// ──────────────────────────────────────────────────────────
// see the project docs Notion website to understand the 
// valid deductive mathematical reasoning of this recursive
// algorithm implementation  
// ──────────────────────────────────────────────────────────

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
   
// parameter b must be a positive integer to prevent infinite recursion
int mystery(int a, int b) {
   if (1 == b) { // base case
      return a;
   } 
   else { // recursion step
      return a + mystery(a, b - 1);
   } 
} 