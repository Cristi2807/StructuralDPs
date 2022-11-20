//
// Created by cristi on 11/16/22.
//

#ifndef STRUCTURALDPS_ROUNDHOLE_H
#define STRUCTURALDPS_ROUNDHOLE_H


#include "RoundPeg.h"

class RoundHole {
private:
    float radius;

public:
    explicit RoundHole(float radius);

    [[nodiscard]] float getRadius() const;

    [[nodiscard]] bool fits(RoundShape *peg) const;
};


#endif //STRUCTURALDPS_ROUNDHOLE_H
