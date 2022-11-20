//
// Created by cristi on 11/18/22.
//

#include "Box.h"

float Box::getPrice() {
    for (auto i: children) {
        price += i->getPrice();
    }
    return price;
}

void Box::addComponent(Component *component) {
    children.push_back(component);
}
