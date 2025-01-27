/**
 * File: exercise_3_26_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Enforcing Privacy with Cryptography) The explosive growth of Internet 
 *                 communications and data storage on Internet-connected computers has greatly 
 *                 increased privacy concerns. The field of cryptography is concerned with coding 
 *                 data to make it difficult (and hopefully—with the most advanced 
 *                 schemes—impossible) for unauthorized users to read. In this exercise, you’ll 
 *                 investigate a simple scheme for encrypting and decrypting data. Later in the 
 *                 book, you’ll learn sophisticated secret-key and public-key cryptography. A 
 *                 company that wants to send data over the Internet has asked you to write a 
 *                 program that will encrypt the data so that it may be transmitted more securely. 
 *                 All the data is transmitted as four-digit integers. Your application should read
 *                 a four-digit integer entered by the user and encrypt it as follows: Replace each 
 *                 digit with the result of adding 7 to the digit and getting the remainder after 
 *                 dividing the new value by 10. Then swap the first digit with the third, and swap 
 *                 the second digit with the fourth. Then print the encrypted integer. Write a 
 *                 separate application that inputs an encrypted four-digit integer and decrypts it
 *                 (by reversing the encryption scheme) to form the original number.           
 * -------------------------------------------------------------------------------------------------
 * Created on: 11-01-2025
 */

// decryption program
#include <iostream>
#include <string>
#include <iomanip> // for std::setfill and std::setw 

using namespace std;

int main() {
    // initialization phase
    //----------------------------------------------------------------------------------
    string encrypted_data = "";
    cout << "Enter a four-digit encrypted integer (including leading zeros if any): ";
    cin >> encrypted_data;

    // ensure the input is exactly 4 digits long
    while (encrypted_data.length() != 4) {
        cout << "Invalid input! Please enter exactly 4 digits: ";
        cin >> encrypted_data;
    }
    //----------------------------------------------------------------------------------
     
    // processing phase
    //-------------------------------------------------------------------------------------
    // swapping digits to reverse the encryption
    // swap the first and third digits, and the second and fourth digits
    
    // swapping process logic
    //**************************************
    // swap first and third     
    char temp = encrypted_data[0];
    encrypted_data[0] = encrypted_data[2];
    encrypted_data[2] = temp;

    // swap second and fourth     
    temp = encrypted_data[1];
    encrypted_data[1] = encrypted_data[3];
    encrypted_data[3] = temp;
    //**************************************

    // arithmetic process logic
    //***********************************************************************************
    // decrypt each digit by reversing (digit + 7) % 10 
    string string_decrypted_data = "";
    int index = 0;
    while (index < encrypted_data.length()) {
        int digit = encrypted_data[index] - '0'; // convert char to int
        int decrypted_digit = (digit - 7) < 0 ? (digit - 7 + 10) : (digit - 7);
        string_decrypted_data += to_string(decrypted_digit); // append decrypted digit 
        index++;
    }
    //***********************************************************************************

    // convert decrypted string to integer
    int decrypted_data = stoi(string_decrypted_data);
    //-------------------------------------------------------------------------------------
    
    // termination phase
    // show result
    cout << "Decrypted data: ";
    cout << std::setfill('0') << std::setw(4) << decrypted_data;

    return 0;
}