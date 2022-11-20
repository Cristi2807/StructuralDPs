//
// Created by cristi on 11/19/22.
//

#ifndef STRUCTURALDPS_SCROLLDECORATOR_H
#define STRUCTURALDPS_SCROLLDECORATOR_H


#include "Decorator.h"

class ScrollDecorator : public Decorator {
public:
    explicit ScrollDecorator(Widget *widget);

    void draw() override;
};


#endif //STRUCTURALDPS_SCROLLDECORATOR_H
