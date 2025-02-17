/**
 * File: exercise_4_20_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Modified Diamond-Printing Program) Modify the application you wrote in Exercise 
 *                 4.19 to read an odd number in the range 1 to 19 to specify the number of rows 
 *                 in the diamond. Your program should then display a diamond of the appropriate 
 *                 size.
 * -------------------------------------------------------------------------------------------------
 * Created on: 17-02-2025
 */

 #include <iostream>

 using namespace std;
 
 int main() {
     // initialization phase
     //----------------------------------------------
     int rows{19}; // diamond order
     
     int counter{0};
     int first_column_index{rows/2};
     int last_column_index{rows/2};
     
     if (rows % 2 == 0) {
         rows += 1; // ensure an odd number of rows 
                   // for a symmetric diamond
     }
     //----------------------------------------------
     
     // processing phase
     //------------------------------------------------------------------------------------
     for (int i{0} ; i < ( (rows * 2) - 1 ) ; ++i) {
         cout << "-";
     }
     cout << "\n";
     
     // main logic 
     // column printing logic
     for (int row{0} ; row < rows ; ++row) {
         for (int column{0} ; column < rows ; ++column) {
             if ( ( column >= first_column_index ) && ( column <= last_column_index ) ) {
                 counter += 1;
                 cout << "* "; // "*" is used instead of a counter
             }
             else {
                 cout << "  "; 
             } 
         }
         
         // update first and last column indices
         if ( row >= (rows / 2 ) ) {
             // below middle row
             first_column_index += 1;
             last_column_index -= 1;
         }
         else {
             // above middle row
             first_column_index -= 1;
             last_column_index += 1;
         }
         
         cout << "\n";
     }
     
     for (int i{0} ; i < ( (rows * 2) - 1 ) ; ++i) {
         cout << "-";
     }
     cout << "\n";
     //------------------------------------------------------------------------------------
 
     return 0;
 } 