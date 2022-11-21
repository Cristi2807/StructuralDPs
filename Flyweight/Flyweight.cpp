//
// Created by cristi on 11/21/22.
//

#include <iostream>
#include "Flyweight.h"

Flyweight::Flyweight(SharedState *sharedState) : sharedState(sharedState) {}

void Flyweight::Operation(UniqueState *uniqueState) {
    std::cout << "Flyweight: Displaying shared (" << sharedState->getName() << sharedState->getModel()
              << sharedState->getColor() << ") and unique (" << uniqueState->getOwner() << uniqueState->getPlates()
              << ") state.\n";
}
