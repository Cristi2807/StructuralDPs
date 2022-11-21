//
// Created by cristi on 11/21/22.
//

#include "UniqueState.h"

#include <utility>

UniqueState::UniqueState(std::string owner, std::string plates) : owner(std::move(owner)), plates(std::move(plates)) {}

const std::string &UniqueState::getOwner() const {
    return owner;
}

const std::string &UniqueState::getPlates() const {
    return plates;
}
