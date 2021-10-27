// Copyright (c) 2021 Igor All rights reserved
//
// Created by: Igor
// Created on: Oct 2021
// This program calculates the time to Mars

#include <iostream>
#include <iomanip>

int main() {
    // this function calculates the time to Mars
    const float LABOR = 0.75;
    const float RENT = 1;
    const float MATERIALS = 0.5;
    int radius;
    float cost;
    float tax;
    float totalCost;

    // input
    std::cout << "Enter a radius of pizza: ";
    std::cin >> radius;

    // process
    cost = LABOR + RENT + radius * MATERIALS;
    tax = cost * 0.15;
    totalCost = cost + tax;

    // output
    std::cout << "" << std::endl;
    std::cout << "The cost of pizza (without tax) is: $"
    << std::setprecision(3) << cost << std::endl;
    std::cout << "The tax is: $" << std::setprecision(3) << tax << std::endl;
    std::cout << "Total cost of pizza is: $"
    << std::setprecision(3) << totalCost << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
