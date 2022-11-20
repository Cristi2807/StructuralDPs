//
// Created by cristi on 11/19/22.
//

#ifndef STRUCTURALDPS_DECORATOR_H
#define STRUCTURALDPS_DECORATOR_H


#include "Widget.h"

class Decorator : public Widget {
private:
    Widget *widget;
public:
    explicit Decorator(Widget *widget);

    void draw() override;
};


#endif //STRUCTURALDPS_DECORATOR_H
