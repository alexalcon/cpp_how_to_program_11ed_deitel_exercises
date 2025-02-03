/**
 * File: exercise_4_12_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Bar-Chart Printing Program) One interesting application of computers is to 
 *                 display graphs and bar charts. Write an application that reads five numbers 
 *                 between 1 and 30. For each number that’s read, your program should display the 
 *                 same number of adjacent asterisks. For example, if your program reads the number 
 *                 7, it should display *******. Display the bars of asterisks after you read all 
 *                 five numbers.  
 * -------------------------------------------------------------------------------------------------
 * Created on: 03-02-2025
 */

#include <iostream>

using namespace std;

int main() {
    // initialization phase and processing phase
    //--------------------------------------------------------------
    // variables to hold the number of 
    // bar asterisks in each input
    int bar_1{0}; 
    int bar_2{0}; 
    int bar_3{0}; 
    int bar_4{0}; 
    int bar_5{0}; 

    // store inputs from user
    for (int counter{0} ; counter < 5 ; ++counter) {
        int integer_input;
        cout << "Enter a positive integer between 1 and 30: ";
        cin >> integer_input;

        while ( (integer_input < 1) || (integer_input > 30) ) {
            cout << "Input positive integer must be between 1 and"
                 << " 30, please reenter the number : ";
            cin >> integer_input;
        }

        switch (counter) {
            case 0:
                bar_1 = integer_input;
                break;
            case 1:
                bar_2 = integer_input;
                break;
            case 2:
                bar_3 = integer_input;
                break;
            case 3:
                bar_4 = integer_input;
                break;
            case 4:
                bar_5 = integer_input;
                break;
        }
    }
    cout << "\n";
    //--------------------------------------------------------------

    // termination phase
    // printing asterisc bars
    for (int counter{0} ; counter < 5 ; ++counter) {
        switch (counter) {
            case 0:
                for (int i{0} ; i < bar_1 ; ++i) {
                    cout << "*";
                }
                cout << "\n";
                
                break;

            case 1:
                for (int i{0} ; i < bar_2 ; ++i) {
                    cout << "*";
                }
                cout << "\n";
                break;
            
            case 2:
                for (int i{0} ; i < bar_3 ; ++i) {
                    cout << "*";
                }
                cout << "\n";
                break;
            
            case 3:
                for (int i{0} ; i < bar_4 ; ++i) {
                    cout << "*";
                }
                cout << "\n";
                break;
            
            case 4:
                for (int i{0} ; i < bar_5 ; ++i) {
                    cout << "*";
                }
                cout << "\n";
                break;
        }
    }    
    
    return 0;
}