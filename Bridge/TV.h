//
// Created by cristi on 11/18/22.
//

#ifndef STRUCTURALDPS_TV_H
#define STRUCTURALDPS_TV_H

#include "Device.h"

class TV : public Device {
public:
    void enable() override;

    void disable() override;
};


#endif //STRUCTURALDPS_TV_H
