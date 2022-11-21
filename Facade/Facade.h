//
// Created by cristi on 11/21/22.
//

#ifndef STRUCTURALDPS_FACADE_H
#define STRUCTURALDPS_FACADE_H


#include "Subsystem1.h"
#include "Subsystem2.h"

class Facade {
protected:
    Subsystem1 *subsystem1;
    Subsystem2 *subsystem2;

public:
    explicit Facade(Subsystem1 *subsystem1, Subsystem2 *subsystem2);

    std::string Operation();
};


#endif //STRUCTURALDPS_FACADE_H
