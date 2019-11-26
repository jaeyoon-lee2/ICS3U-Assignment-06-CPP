// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Jaeyoon (Jay) Lee
// Created on: Nov 2019
// This program calculates the volume of cone

#include <iostream>
#include <cmath>
#include <string>


float CalculateVolume(int radius, int height) {
    // this function calculate the volume of cone

    float volume;

    // process
    volume = 1.0 / 3.0 * M_PI*pow(radius, 2)*height;

    return volume;
}


main() {
    // this function gets radius and height

    std::string height;
    std::string radius;
    int radiusAsInt;
    int heightAsInt;
    float volume;

    // input
    std::cout << "Enter the radius of cone (metre): ";
    std::cin >> radius;
    std::cout << "Enter the height of cone (metre): ";
    std::cin >> height;
    std::cout << std::endl;

    try {
        radiusAsInt = std::stoi(radius);
        heightAsInt = std::stoi(height);
        if (radiusAsInt > 0 && heightAsInt > 0) {
            volume = CalculateVolume(radiusAsInt, heightAsInt);
            std::cout << "The volume of cone is " << volume << " m³"
                      << std::endl;
        } else {
            std::cout << "Those numbers are minus" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Those are not integers";
    }
}
