// Copyright (c) 2021 Jenoe Balote All Rights Reserved
//
// Created by: Jenoe Balote
// Created on: May 2021
// This program determines positive/negative/zero numbers

#include <iostream>

int main() {
    // this function runs the "Number Guessing Game"
    int integer;


    // input
    std::cout << "Positive, negative or zero?";
    std::cout << "" << std::endl;
    std::cout << "Enter an integer: ";
    std::cin >> integer;
    std::cout << "" << std::endl;

    // process
    if (integer >= 0) {
        // output
        std::cout << integer << " is a positive number!" << std::endl;
    } else if (integer <= 0) {
        // output
        std::cout << integer << " is a negative number!" << std::endl;
    } else {
        // output
        std::cout << integer << " is nothing but a zero!" << std::endl;
    }
}
