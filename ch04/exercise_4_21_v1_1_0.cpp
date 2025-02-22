/**
 * File: exercise_4_21_v1_1_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Removing break and continue) A criticism of the break and continue statement is 
 *                 that each is unstructured. Actually, these statements can always be replaced by 
 *                 structured statements, although doing so can be awkward. Describe in general how 
 *                 you’d remove any break statement from a loop in a program and replace it with 
 *                 some structured equivalent. [Hint: The break statement exits a loop from the 
 *                 body of the loop. The other way to exit is by failing the loop-continuation test. 
 *                 Consider using in the loop-continuation test a second test that indicates “early
 *                 exit because of a ‘break’ condition.”] Use the technique you develop here to 
 *                 remove the break statement from the application in Fig.4.8.
 * -------------------------------------------------------------------------------------------------
 * Created on: 22-02-2025
 */

#include <iostream>

using namespace std;
 
int main() {
    int count = 1;           // control variable also used after loop
    bool should_exit{false}; // flag to indicate early exit

    for (; (count <= 10 && !should_exit) ; ++count) {
        if (count == 5) {
            should_exit = true; // set flag instead of breaking
        }
        else {
            cout << count << " ";    
        }
    }

    cout << "\nBroke out of loop at count = " << count - 1 << ".\n";

    return 0;
}