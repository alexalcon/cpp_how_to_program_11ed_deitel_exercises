/**
 * File: exercise_3_10_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Validating User Input) The examination results program of Fig. 3.3 assumes that
 *                 any value input by the user that’s not a 1 must be a 2. Modify the application 
 *                 to validate its inputs. If a value entered is not 1 or 2, keep looping until the 
 *                 user enters a correct value.
 * -------------------------------------------------------------------------------------------------
 * Created on: 24-12-2024
 */

#include <iostream>

using namespace std;

int main() {
	// initializing variables in declarations
    int passes{0}; 
    int failures{0};
    int studentCounter{1}; 

    // process 10 students using counter-controlled loop
    while (studentCounter <= 10) {
        // prompt user for input and obtain value from user
        cout << "Enter result (1 = pass, 2 = fail): ";
        int result;
        cin >> result;

        // validate input
        while (result != 1 && result != 2) {
            cout << "Invalid input. Please enter 1 for pass or 2 for fail: ";
            cin >> result;            
        }       

        // if...else is nested in the while statement           
        if (result == 1) {     
            passes = passes + 1;  
        }
        else {
            failures = failures + 1; 
        }

        // increment studentCounter so loop eventually terminates
        studentCounter = studentCounter + 1;  
    }

    // termination phase; prepare and display results
    cout << "Passed: " << passes << "\nFailed: " << failures << "\n";

   	// determine whether more than 8 students passed
	if (passes > 8) {
		std::cout << "Bonus to instructor!";
   	}
}