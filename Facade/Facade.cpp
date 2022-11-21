//
// Created by cristi on 11/21/22.
//

#include "Facade.h"

Facade::Facade(Subsystem1 *subsystem1, Subsystem2 *subsystem2) {
    if (subsystem1 == nullptr) {
        this->subsystem1 = new Subsystem1;
    } else {
        this->subsystem1 = subsystem1;
    }

    if (subsystem2 == nullptr) {
        this->subsystem2 = new Subsystem2;
    } else {
        this->subsystem2 = subsystem2;
    }
}

std::string Facade::Operation() {
    std::string result = "Facade initializes subsystems:\n";
    result += this->subsystem1->Operation1();
    result += this->subsystem2->Operation1();
    result += "Facade orders subsystems to perform the action:\n";
    result += this->subsystem1->OperationN();
    result += this->subsystem2->OperationZ();
    return result;
}
