//
// Created by cristi on 11/21/22.
//

#include "SharedState.h"

#include <utility>

SharedState::SharedState(std::string name, std::string model, std::string color) : name(std::move(name)),
                                                                                   model(std::move(model)),
                                                                                   color(std::move(color)) {}

const std::string &SharedState::getName() const {
    return name;
}

const std::string &SharedState::getModel() const {
    return model;
}

const std::string &SharedState::getColor() const {
    return color;
}
