/**
 * File: exercise_4_24_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (“The Twelve Days of Christmas” Song) Find the lyrics to the song “The Twelve 
 *                 Days of Christmas” online, then write an application using iteration and switch 
 *                 to print the song. One switch statement should be used to print the day (“first,”
 *                 “second,” and so on). A separate switch statement should be used to print the
 *                 remainder of each verse.
 * -------------------------------------------------------------------------------------------------
 * Created on: 22-02-2025
 */

/**
 * the song has this cumulative structure:
 * 
 *      On the first day of Christmas, my true love sent to me:
 *      A partridge in a pear tree.
 * 
 *      On the second day of Christmas, my true love sent to me:
 *      Two turtle doves.
 *      A partridge in a pear tree.
 *      
 *      On the third day of Christmas, my true love sent to me:
 *      Three French hens.
 *      Two turtle doves.
 *      A partridge in a pear tree.
 * 
 *      On the fourth day of Christmas, my true love sent to me:
 *      Four calling birds.
 *      Three French hens.
 *      Two turtle doves.
 *      A partridge in a pear tree.
 * 
 *      .
 *      .
 *      .
 * 
 *      ref: https://www.vox.com/21796404/12-days-of-christmas-explained
 * 
 * so, the song has this cumulative pattern: 
 * 
 *      1 - 2 1 - 3 2 1 - 4 3 2 1 - 5 4 3 2 1 - ... - 12 11 10 ... 1 
 */

#include <iostream>

using namespace std;

int main() {
    for (int counter{1} ; counter <= 12 ; ++counter) {
        switch (counter) {
            case 1:
                cout << "On the first day of Christmas, my true love sent to me:\n";
                break;
                
            case 2:
                cout << "\nOn the second day of Christmas, my true love sent to me:\n";
                break;
                
            case 3:
                cout << "\nOn the third day of Christmas, my true love sent to me:\n";
                break;
                
            case 4:
                cout << "\nOn the fourth day of Christmas, my true love sent to me:\n";
                break;
                
            case 5:
                cout << "\nOn the fifth day of Christmas, my true love sent to me:\n";
                break;
                
            case 6:
                cout << "\nOn the sixth day of Christmas, my true love sent to me:\n";
                break;
                
            case 7:
                cout << "\nOn the seventh day of Christmas, my true love sent to me:\n";
                break;
                
            case 8:
                cout << "\nOn the eighth day of Christmas, my true love sent to me:\n";
                break;
                
            case 9:
                cout << "\nOn the ninth day of Christmas, my true love sent to me:\n";
                break;
                
            case 10:
                cout << "\nOn the tenth day of Christmas, my true love sent to me:\n";
                break;
                
            case 11:
                cout << "\nOn the eleventh day of Christmas, my true love sent to me:\n";
                break;
                
            case 12:
                cout << "\nOn the twelveth day of Christmas, my true love sent to me:\n";
                break;
        }
        
        switch (counter) {
            case 12:
                cout << "Twelve Drummers Drumming.\n";
                    
            case 11:
                cout << "Eleven Pipers Piping.\n";
            
            case 10:
                cout << "Ten Lords a-Leaping.\n";
            
            case 9:
                cout << "Nine Ladies Dancing.\n";
            
            case 8:
                cout << "Eight Maids a-Milking.\n";
            
            case 7:
                cout << "Seven Swans a-Swimming.\n";
            
            case 6:
                cout << "Six Geese a-Laying.\n";
            
            case 5:
                cout << "Five Golden Rings.\n";
            
            case 4:
                cout << "Four Calling Birds.\n";
                
            case 3:
                cout << "Three French Hens.\n";

            case 2:
                cout << "Two Turtle Doves.\n";
                
            case 1:
                cout << "A Partridge in a Pear Tree.\n";  
        }       
    }
    
    return 0;
}