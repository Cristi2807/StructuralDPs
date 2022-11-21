//
// Created by cristi on 11/21/22.
//

#ifndef STRUCTURALDPS_FLYWEIGHTFACTORY_H
#define STRUCTURALDPS_FLYWEIGHTFACTORY_H


#include <unordered_map>
#include <string>
#include "Flyweight.h"

class FlyweightFactory {
private:
    std::unordered_map<std::string, Flyweight> flyweights;

    static std::string getKey(SharedState *sharedState);

public:
    FlyweightFactory();

    Flyweight getFlyweight(SharedState *sharedState);

    void addCarPoliceDatabase(
            std::string plates,
            std::string owner,
            std::string name,
            std::string model,
            std::string color);

    void listFlyweights();

};


#endif //STRUCTURALDPS_FLYWEIGHTFACTORY_H
