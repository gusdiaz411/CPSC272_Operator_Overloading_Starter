//
// Created by Gustavo Diaz
// Date: 9/22/25
// Class: CPSC272
//
#include <iostream>
#include "ServiceAccount.h"

/**
 * @brief Main function demonstrating ServiceAccount operator overloading
 * 
 * This program demonstrates the functionality of the ServiceAccount class,
 * specifically testing the overloaded equality (==), greater-than (>), and less-than (<) operators.
 *
 * @return 0 on successful execution
 */
int main() {
    // Create first ServiceAccount with identifier "0112", password "password", and balance $1000.00
    ServiceAccount a("0112", "password", 1000.00);

    // Create second ServiceAccount with identifier "9098", same password, and balance $500.00
    ServiceAccount b("9098", "password", 500.00);

    // Test equality operator (==) - compares accounts based on balance only
    if (a == b)
        std::cout << "Accounts are equal" << std::endl;
    else
        std::cout << "Accounts are not equal" << std::endl;

    // Test greater-than operator (>) - compares accounts based on balance only
    if (a > b)
        std::cout << "Account a has more money" << std::endl;
    else
        std::cout << "Account b has more money" << std::endl;

    // Test less-than operator (<) - compares accounts based on balance only
    if (a < b)
        std::cout << "Account a has less money" << std::endl;
    else
        std::cout << "Account b has less money" << std::endl;

    return 0;  // Indicate successful program execution
}
