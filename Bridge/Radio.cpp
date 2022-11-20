//
// Created by cristi on 11/18/22.
//

#include <iostream>
#include "Radio.h"

void Radio::enable() {
    power = true;
    std::cout << "Radio is turning on." << std::endl;
}

void Radio::disable() {
    power = false;
    std::cout << "Radio is turning off." << std::endl;
}
