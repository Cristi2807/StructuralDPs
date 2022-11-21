//
// Created by cristi on 11/21/22.
//

#ifndef STRUCTURALDPS_FLYWEIGHT_H
#define STRUCTURALDPS_FLYWEIGHT_H


#include "SharedState.h"
#include "UniqueState.h"

class Flyweight {
private:
    SharedState *sharedState;
public:
    explicit Flyweight(SharedState *sharedState);

    void Operation(UniqueState *uniqueState);
};


#endif //STRUCTURALDPS_FLYWEIGHT_H
