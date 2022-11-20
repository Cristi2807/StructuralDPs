//
// Created by cristi on 11/16/22.
//

#include "RoundHole.h"


RoundHole::RoundHole(float radius) : radius(radius) {}

float RoundHole::getRadius() const {
    return radius;
}

bool RoundHole::fits(RoundShape *peg) const {
    return this->getRadius() >= peg->getRadius();
}


