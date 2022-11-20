//
// Created by cristi on 11/16/22.
//

#include "SquarePegAdapter.h"
#include <cmath>


float SquarePegAdapter::getRadius() {
    return float(squarePeg->getWidth() * sqrt(2) / 2);
}

SquarePegAdapter::SquarePegAdapter(SquarePeg *squarePeg) : squarePeg(squarePeg) {}
