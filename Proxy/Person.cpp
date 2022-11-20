//
// Created by cristi on 11/20/22.
//

#include "Person.h"

#include <utility>

Person::Person(std::string name) : name(std::move(name)) {}

const std::string &Person::getName() const {
    return name;
}
