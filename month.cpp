// Copyright(c) 2022 Lucas DeBruyn All rights reserved.
//
// Created by : Lucas DeBruyn
// Created on : October 2022
// This program uses select case to find months of the year
//    with user input

#include <iostream>

int main() {
    // creating variables
    int userMonth;

    // input
    std::cout << "Enter the number of a month: ";
    std::cin >> userMonth;

    // process and output
    switch (userMonth) {
        case 1:
            std::cout << "January";
            break;
        case 2:
            std::cout << "February";
            break;
        case 3:
            std::cout << "March";
            break;
        case 4:
            std::cout << "April";
            break;
        case 5:
            std::cout << "May";
            break;
        case 6:
            std::cout << "June";
            break;
        case 7:
            std::cout << "July";
            break;
        case 8:
            std::cout << "August";
            break;
        case 9:
            std::cout << "September";
            break;
        case 10:
            std::cout << "October";
            break;
        case 11:
            std::cout << "November";
            break;
        case 12:
            std::cout << "December";
            break;
        default:
            std::cout << "Not a month";
    }

    std::cout << "\nDone.";
}
