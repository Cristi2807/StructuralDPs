//
// Created by cristi on 11/21/22.
//

#include <iostream>
#include <utility>
#include "FlyweightFactory.h"

std::string FlyweightFactory::getKey(SharedState *sharedState) {
    return sharedState->getName() + '_' + sharedState->getModel() + '_' + sharedState->getColor();
}

Flyweight FlyweightFactory::getFlyweight(SharedState *sharedState) {

    std::string key = this->getKey(sharedState);

    if (this->flyweights.find(key) == this->flyweights.end()) {
        std::cout << "FlyweightFactory: Can't find a flyweight, creating new one.\n";
        this->flyweights.insert(std::make_pair(key, Flyweight(sharedState)));
    } else {
        std::cout << "FlyweightFactory: Reusing existing flyweight.\n";
    }
    return this->flyweights.at(key);
}

void FlyweightFactory::addCarPoliceDatabase(std::string plates, std::string owner,
                                            std::string name, std::string model, std::string color) {

    std::cout << "Adding a car to database." << std::endl;

    Flyweight flyweight = this->getFlyweight(
            new SharedState(std::move(name), std::move(model), std::move(color)));

    flyweight.Operation(new UniqueState(std::move(owner), std::move(plates)));
}

void FlyweightFactory::listFlyweights() {
    size_t count = this->flyweights.size();

    std::cout << "\nFlyweightFactory: I have " << count << " flyweights:\n";
    for (std::pair<std::string, Flyweight> pair: this->flyweights) {
        std::cout << pair.first << "\n";
    }
}

FlyweightFactory::FlyweightFactory() = default;
