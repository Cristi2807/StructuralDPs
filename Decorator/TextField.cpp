//
// Created by cristi on 11/19/22.
//

#include "TextField.h"
#include <iostream>

TextField::TextField(int width, int height) : width(width), height(height) {}

void TextField::draw() {
    std::cout << "TextField " << width << ", " << height << std::endl;
}
