//
// Created by cristi on 11/18/22.
//

#include "TV.h"
#include <iostream>

void TV::enable() {
    power = true;
    std::cout << "TV is turning on." << std::endl;
}

void TV::disable() {
    power = false;
    std::cout << "TV is turning off." << std::endl;
}
