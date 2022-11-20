//
// Created by cristi on 11/16/22.
//

#ifndef STRUCTURALDPS_SQUAREPEG_H
#define STRUCTURALDPS_SQUAREPEG_H


class SquarePeg {
private:
    float width;

public:
    explicit SquarePeg(float width);

    [[nodiscard]] float getWidth() const;

};


#endif //STRUCTURALDPS_SQUAREPEG_H
