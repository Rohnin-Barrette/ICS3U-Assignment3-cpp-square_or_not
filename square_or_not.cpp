// Copyright [2021] Rohnin Barrette"  [legal/copyright]
//
// Created by: Rohnin Barrette
// Created on: Sept 2021
// This is a program that calculates the
// area and perimiter of a rectangle with user
// input. and tells the user if it's a square or not

#include <iostream>

int main() {
    // this function calculates area and perimeter
    int length;
    int width;
    int area;
    int perimeter;

    // input
    std::cout << "Enter lenght of the rectangle (mm): ";
    std::cin >> length;
    std::cout << "Enter width of the rectangle (mm): ";
    std::cin >> width;

    // process and output
    area = length * width;
    perimeter = 2*(length+width);
    std::cout << "" << std::endl;
    std::cout << "Area is " << area << " mm²." << std::endl;
    std::cout << "perimeter is " << perimeter << " mm. " << std::endl;
    std::cout << "" << std::endl;
    if (length == width) {
        std::cout << "It is a square.";
    } else {
        std::cout << "It is a rectangle";
    }
    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
