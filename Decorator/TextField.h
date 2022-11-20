//
// Created by cristi on 11/19/22.
//

#ifndef STRUCTURALDPS_TEXTFIELD_H
#define STRUCTURALDPS_TEXTFIELD_H


#include "Widget.h"

class TextField : public Widget {
private:
    int width, height;
public:
    TextField(int width, int height);

    void draw() override;
};


#endif //STRUCTURALDPS_TEXTFIELD_H
