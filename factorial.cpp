// Copyright (c) 2022 Paterry Baptichon All rights reserved

// Created by Paterry Baptichon
// Created on 2022-04-21
// This program can do factorial


#include <iostream>
#include <string>

int main()  {
    // this function can tell the user the total multiplied number

    std::string positiveIntegerString;
    int positiveInteger;
    int product = 1;
    int loopCounter = 1;

    std::cout << "This program can multiply up from 1 to the number you type."
              << "\n" << "For example, 5: 1x2x3x4x5=120" << "\n" << std::endl;

    // input
    std::cout << "Enter in a positive integer: " << std::endl;
    std::cin >> positiveIntegerString;
    std::cout << "" << std::endl;

    // process of and calculation of the factorial number
    // and output the factorial number

    try {
        positiveInteger = std::stoi(positiveIntegerString.c_str());

        if (positiveInteger == 0) {
            std::cout << "The factorial of 0 is 1" << std::endl;
        } else {
            if (positiveInteger > 0) {
                do {
                    product = product * loopCounter;
                    loopCounter = loopCounter + 1;
                } while (loopCounter <= positiveInteger);

                std::cout << "The multiplication of numbers from 1 to "
                          << positiveInteger << " is " << product << std::endl;
            } else {
                std::cout << "This is a negative integer" << std::endl;
            }
        }
        }
    catch (std::invalid_argument) {
        std::cout << "This is not an integer" << std::endl;
    }
}
