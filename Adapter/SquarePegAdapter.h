//
// Created by cristi on 11/16/22.
//

#ifndef STRUCTURALDPS_SQUAREPEGADAPTER_H
#define STRUCTURALDPS_SQUAREPEGADAPTER_H

#include "RoundShape.h"
#include "SquarePeg.h"

class SquarePegAdapter : public RoundShape {
private:
    SquarePeg *squarePeg;

public:
    float getRadius() override;

    explicit SquarePegAdapter(SquarePeg *squarePeg);
};


#endif //STRUCTURALDPS_SQUAREPEGADAPTER_H
