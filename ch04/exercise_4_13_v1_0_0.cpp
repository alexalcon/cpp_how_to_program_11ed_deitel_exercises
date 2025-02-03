/**
 * File: exercise_4_13_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: (Calculating Sales) An online retailer sells five products whose retail prices are 
 *              as follows: Product 1, $2.98; product 2, $4.50; product 3, $9.98; product 4, $4.49 
 *              and product 5, $6.87. Write an application that reads a series of pairs of numbers 
 *              as follows: 
 *                  
 *                  a) product number 
 *                  b) quantity sold
 * 
 *              Use a switch statement to determine each product’s retail price. It should 
 *              calculate and display the total retail value of all products sold. Use a 
 *              sentinel-controlled loop to determine when the program should stop looping and 
 *              display the final results.  
 * -------------------------------------------------------------------------------------------------
 * Created on: 03-02-2025
 */

#include <iostream>
#include <format>

#include <boost/multiprecision/cpp_dec_float.hpp>

#include "decimalformatter.h"

using boost::multiprecision::cpp_dec_float_50;

int main() {
    // initialization phase
    cpp_dec_float_50 total_sales{0.0} ; // accumulates total retail value
    int product_number = 0;             // will store product number (1–5)
    int quantity_sold = 0;              // will store quantity sold

    // processing phase
    // sentinel-controlled iteration 
    // loop until product_number is 0
    while (true) {
        std::cout << "Enter product number (1-5) or 0 to quit: ";
        std::cin >> product_number;

        // product number input valiation
        while ( (product_number < 0) || (product_number > 5) ) {
            std::cout << "Invalid product number, please reenter"
                      << " a valid product number: ";
            std::cin >> product_number;
        }

        if (product_number == 0) {
            // 0 indicates “stop,” so break out of the loop
            break;
        }

        // prompt for the quantity sold
        std::cout << "Enter quantity sold: ";
        std::cin >> quantity_sold;

        // switch statement to add the corresponding retail price to total_sales
        switch (product_number) {
            case 1:
                total_sales += 2.98 * quantity_sold ;
                break;
            case 2:
                total_sales += 4.50 * quantity_sold ;
                break;
            case 3:
                total_sales += 9.98 * quantity_sold ;
                break;
            case 4:
                total_sales += 4.49 * quantity_sold ;
                break;
            case 5:
                total_sales += 6.87 * quantity_sold ;
                break;
        }
    }

    // termination phase
    // display the total retail value with two decimals
    std::cout << std::format("{}{}\n", 
                             "\nTotal retail value of all products sold: $", 
                             total_sales);

    return 0;
}