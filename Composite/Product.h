//
// Created by cristi on 11/18/22.
//

#ifndef STRUCTURALDPS_PRODUCT_H
#define STRUCTURALDPS_PRODUCT_H


#include "Component.h"

class Product : public Component {
private:
    float price;
public:
    explicit Product(float price);

    float getPrice() override;

};


#endif //STRUCTURALDPS_PRODUCT_H
