/**
 * File: exercise_3_26_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: (Enforcing Privacy with Cryptography) The explosive growth of Internet 
 *              communications and data storage on Internet-connected computers has greatly 
 *              increased privacy concerns. The field of cryptography is concerned with coding data
 *              to make it difficult (and hopefully—with the most advanced schemes—impossible) for 
 *              unauthorized users to read. In this exercise, you’ll investigate a simple scheme 
 *              for encrypting and decrypting data. Later in the book, you’ll learn sophisticated 
 *              secret-key and public-key cryptography. A company that wants to send data over the 
 *              Internet has asked you to write a program that will encrypt the data so that it may 
 *              be transmitted more securely. All the data is transmitted as four-digit integers.
 *              Your application should read a four-digit integer entered by the user and encrypt 
 *              it as follows: Replace each digit with the result of adding 7 to the digit and 
 *              getting the remainder after dividing the new value by 10. Then swap the first digit 
 *              with the third, and swap the second digit with the fourth. Then print the encrypted 
 *              integer. Write a separate application that inputs an encrypted four-digit integer
 *              and decrypts it (by reversing the encryption scheme) to form the original number.             
 * -------------------------------------------------------------------------------------------------
 * Created on: 10-01-2025
 */

// encryption program
#include <iostream>
#include <iomanip> // for std::setfill and std::setw 

using namespace std;

int main() {
    // initialization phase
    int encrypted_data{0};
    int multiplier{100};
     
    int data{0};
    cout << "Enter a four digit integer: ";
    cin >> data;
    int holding_data = data; 

    // processing phase - encryption process
    //------------------------------------------------------------
    // main logic
    //******************************************************** 
    while (data != 0) {
        int digit{data%10};

        encrypted_data += (multiplier * ((digit + 7) % 10));
        
        data /= 10;
        if (multiplier == 1000) {
            multiplier = 1;
        } 
        else {
            multiplier *= 10;
        }
    } 
    //******************************************************** 
    
    // termination process - encryption process
    // show result
    /**
     * handling leading zeros - setfill() and setw() functions
     * 
     *      std::setfill('0'):
     *          - Ensures that leading spaces are replaced 
     *            by zeros.
     *          - Any "missing" digits will be padded with 
     *            zeros to make the output a full four-digit 
     *            number.
     * 
     *      std::setw(4):
     *          - Ensures that the output always has a width 
     *            of 4 characters. If the number has fewer 
     *            than 4 digits (e.g., 15, 5), it will be 
     *            padded with leading zeros to make it 4 
     *            digits (e.g., 0015, 0005).
     */
    cout << "Encrypted data: ";
    cout << std::setfill('0') << std::setw(4) << encrypted_data;
    //------------------------------------------------------------
    
    return 0;
}