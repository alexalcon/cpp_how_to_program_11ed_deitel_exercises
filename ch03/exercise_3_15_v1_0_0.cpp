/**
 * File: exercise_3_15_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * ---------------------------------------------------------------------------------------
 * Description: (Another Dangling-else Problem) Based on the dangling-else discussion 
 *              in Exercise 3.13, modify the following code to produce the output shown.
 *              Use proper indentation techniques. You must not make any additional 
 *              changes other than inserting braces. We eliminated the indentation from 
 *              the following code to make the problem more challenging. [Note: No 
 *              modification may be necessary.]
 *              
 *                  if (y == 8)
 *                  if (x == 5)
 *                  cout << "@@@@\n";
 *                  else
 *                  cout << "#####\n";
 *                  cout << "$$$$$\n";
 *                  cout << "&&&&&\n";
 *              
 *                  a) Assuming x = 5 and y = 8, the following output is produced:
 *              
 *                      @@@@
 *                      $$$$$
 *                      &&&&&
 *              
 *                  b) Assuming x = 5 and y = 8, the following output is produced:
 *              
 *                      @@@@
 *              
 *                  c) Assuming x = 5 and y = 8, the following output is produced:
 *              
 *                      @@@@
 *                      &&&&&
 *              
 *                  d) Assuming x = 5 and y = 7, the following output is produced.
 *              
 *                      ##### 
 *                      $$$$$
 *                      &&&&& 
 * ---------------------------------------------------------------------------------------
 * Created on: 24-12-2024
 */

#include <iostream>

using namespace std;

int main() {
    // a) 
    int x{5};
    int y{8};

    if (y == 8) {
        if (x == 5) {
            cout << "@@@@\n";
        }
    }
    else {
        cout << "#####\n";
    }
    cout << "$$$$$\n";
    cout << "&&&&&\n";

    // b) 
    cout << "\n";
    if (y == 8){
        if (x == 5) {
            cout << "@@@@\n";
        }
    }
    else {
        cout << "#####\n";
        cout << "$$$$$\n";
        cout << "&&&&&\n";
    }


    // c) 
    cout << "\n";
    if (y == 8) {
        if (x == 5) {
            cout << "@@@@\n";
        }
    }
    else {
        cout << "#####\n";
        cout << "$$$$$\n";
    }
    cout << "&&&&&\n";

    // d) 
    cout << "\n";
    y = 7;

    if (y == 8) {
        if (x == 5) {
            cout << "@@@@\n";
        }
    }
    else {
        cout << "#####\n";
        cout << "$$$$$\n";
        cout << "&&&&&\n";
    }
    
    return 0;
}