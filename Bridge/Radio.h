//
// Created by cristi on 11/18/22.
//

#ifndef STRUCTURALDPS_RADIO_H
#define STRUCTURALDPS_RADIO_H


#include "Device.h"

class Radio : public Device {
public:
    void enable() override;

    void disable() override;
};


#endif //STRUCTURALDPS_RADIO_H
