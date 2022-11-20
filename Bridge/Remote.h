//
// Created by cristi on 11/18/22.
//

#ifndef STRUCTURALDPS_REMOTE_H
#define STRUCTURALDPS_REMOTE_H


#include "Device.h"

class Remote {
protected:
    Device *device;

public:
    explicit Remote(Device *device);

    void togglePower();

    void volumeDown();

    void volumeUp();

    void channelDown();

    void channelUp();

};


#endif //STRUCTURALDPS_REMOTE_H
