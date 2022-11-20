//
// Created by cristi on 11/18/22.
//

#ifndef STRUCTURALDPS_BOX_H
#define STRUCTURALDPS_BOX_H


#include "Component.h"
#include <vector>

class Box : public Component {
private:
    float price;
    std::vector<Component *> children;
public:
    float getPrice() override;

    void addComponent(Component *component);

};


#endif //STRUCTURALDPS_BOX_H
