//
// Created by cristi on 11/16/22.
//

#ifndef STRUCTURALDPS_ROUNDPEG_H
#define STRUCTURALDPS_ROUNDPEG_H


#include "RoundShape.h"

class RoundPeg : public RoundShape {
private:
    float radius;

public:
    explicit RoundPeg(float radius);

    [[nodiscard]] float getRadius() override;

};


#endif //STRUCTURALDPS_ROUNDPEG_H
