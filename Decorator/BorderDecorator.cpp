//
// Created by cristi on 11/19/22.
//

#include <iostream>
#include "BorderDecorator.h"

BorderDecorator::BorderDecorator(Widget *widget) : Decorator(widget) {}

void BorderDecorator::draw() {
    Decorator::draw();
    std::cout << "Border Decorator" << std::endl;
}
