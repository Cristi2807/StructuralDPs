//
// Created by cristi on 11/21/22.
//

#ifndef STRUCTURALDPS_SHAREDSTATE_H
#define STRUCTURALDPS_SHAREDSTATE_H


#include <string>

class SharedState {
private:
    std::string name;
    std::string model;
    std::string color;
public:
    SharedState(std::string name, std::string model, std::string color);

    const std::string &getName() const;

    const std::string &getModel() const;

    const std::string &getColor() const;
};


#endif //STRUCTURALDPS_SHAREDSTATE_H
