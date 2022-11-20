//
// Created by cristi on 11/19/22.
//

#include <iostream>
#include "ScrollDecorator.h"

ScrollDecorator::ScrollDecorator(Widget *widget) : Decorator(widget) {}

void ScrollDecorator::draw() {
    Decorator::draw();
    std::cout << "Scroll Decorator" << std::endl;
}
