// Copyright (c) 2025 Yoma Ozoh All rights reserved
//
// Created By : Yoma Ozoh
// Date : November, 2025
// This program calculates percentage of grade level
// Copyright (c) 2025 Yoma Ozoh All rights reserved.
//
#include <iostream>
#include <string>

int calcMark(std::string level) {
    int grade = -1;
    // set each grade level to percentage
    if (level == "4++") {
        grade = 95;

    } else if (level == "4+") {
        grade = 90;

    } else if (level == "4") {
        grade = 85;

    } else if (level == "4-") {
        grade = 80;

    } else if (level == "3+") {
        grade = 79;

    } else if (level == "3") {
        grade = 75;

    } else if (level == "3-") {
        grade = 70;

    } else if (level == "2+") {
        grade = 69;

    } else if (level == "2") {
        grade = 65;

    } else if (level == "2-") {
        grade = 60;

    } else if (level == "1+") {
        grade = 58;

    } else if (level == "1") {
        grade = 55;

    } else if (level == "1-") {
        grade = 50;
    }

    return grade;  // invalid stays -1
}

int main() {
    std::string level;
    // ask user to enter grade level
    std::cout << "Enter the level (1-, 2, 3+, 4++): ";

    std::cin >> level;
    int mark = calcMark(level);

    if (mark == -1) {
        std::cout << "Invalid level entered." << std::endl;

    } else {
        std::cout << "The middle percentage for "
                  << level << " is " << mark << "%" << std::endl;
    }
}
