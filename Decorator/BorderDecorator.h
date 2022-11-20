//
// Created by cristi on 11/19/22.
//

#ifndef STRUCTURALDPS_BORDERDECORATOR_H
#define STRUCTURALDPS_BORDERDECORATOR_H


#include "Decorator.h"

class BorderDecorator : public Decorator {

public:
    explicit BorderDecorator(Widget *widget);

    void draw() override;
};


#endif //STRUCTURALDPS_BORDERDECORATOR_H
