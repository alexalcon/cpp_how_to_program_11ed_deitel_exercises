/**
 * File: exercise_2_22_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: (Integer Equivalent of a Character) Here is a peek ahead. In this chapter, you
 *              learned about integers and the type int. C++ can also represent uppercase letters, 
 *              lowercase letters and various special symbols. C++ uses small integers internally
 *              to represent each different character. The set of characters a computer uses and
 *              the corresponding integer representations for those characters are called that 
 *              computer’s character set. You can print a character by enclosing that character in
 *              single quotes, as with 
 *                      
 *                      cout << 'A'; // print an uppercase A 
 *  
 *              You can print the integer equivalent of a character using static_cast as follows: 
 * 
 *                      cout << static_cast<int>('A'); // print 'A' as an integer
 * 
 *              This is called a cast operation. The expression static_cast<int>('A') converts the
 *              character 'A' to its integer equivalent 65 (on systems that use the ASCII character
 *              set or Unicode character set). Write a program that prints the integer equivalent 
 *              of a character the user enters at the keyboard. Store the input in a variable of
 *              type char. Test your program several times using uppercase letters, lowercase   
 *              letters, digits and special characters (such as $).
 * -------------------------------------------------------------------------------------------------
 * Created on: 29-02-2024
 */

#include <iostream>

using namespace std;

int main() {
    // read character from user
    //----------------------------
    char character;

    cout << "Enter character: ";
    cin >> character;
    //----------------------------

    // display user's integer equivalent character
    cout << "Integer equivalent of " 
         << character 
         << " is: "
         << static_cast<int>(character);

    return 0;
}