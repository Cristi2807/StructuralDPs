//
// Created by cristi on 11/19/22.
//

#include "Decorator.h"

Decorator::Decorator(Widget *widget) : widget(widget) {}

void Decorator::draw() {
    widget->draw();
}
