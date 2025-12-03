/**
 * File: exercise_5_42_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Scoped enum) Create a scoped enum named AccountType containing constants
 *                 named savings, checking and investment.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 03-12-2025
 */

#include <iostream>
#include <format>

int main() {
    enum class AccountType {savings, checking, investment};
    AccountType myAccount{AccountType::checking};
    std::cout << std::format("AccountType enum created. Current account type is checking.\n");

    // counter-controlled loop to demonstrate usage
    // scoped enums cannot be directly formatted as integers; you need 
    // to use static_cast to convert them to their underlying integer type
    for (int i{0} ; i < 3 ; ++i) {
        switch (myAccount) {
            case AccountType::savings:
                std::cout << std::format("This is a savings account: {:d}\n", static_cast<int>(myAccount));
                myAccount = AccountType::checking; // change for next iteration
                break;
            case AccountType::checking:
                std::cout << std::format("This is a checking account: {:d}\n", static_cast<int>(myAccount));
                myAccount = AccountType::investment; // change for next iteration
                break;
            case AccountType::investment:
                std::cout << std::format("This is an investment account: {:d}\n", static_cast<int>(myAccount));
                myAccount = AccountType::savings; // change for next iteration
                break;
        }
    }
}