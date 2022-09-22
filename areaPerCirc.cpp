// Copyright (c) 2022 Joseph Kwon All rights reserved.
// .
// Created by: Joseph Kwon
// Date: Sep. 22, 2022
// This program calculates the area and circumference of a circle
// With radius that is 15mm


#include <cmath>
#include <iostream>

int rad = 15;
int circ = (M_PI * 2 * rad);
int area = (M_PI * pow(rad, 2));

int main() {
    std::cout << "If a cricle has a raidus of 15mm:" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Area is: " << (circ) << ("mm^2") << std::endl;
    std::cout << "Circumference is: " << (area) << ("mm^2") << std::endl;
}