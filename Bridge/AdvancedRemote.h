//
// Created by cristi on 11/18/22.
//

#ifndef STRUCTURALDPS_ADVANCEDREMOTE_H
#define STRUCTURALDPS_ADVANCEDREMOTE_H


#include "Remote.h"

class AdvancedRemote : public Remote {
public:
    explicit AdvancedRemote(Device *device);

    void mute();
};


#endif //STRUCTURALDPS_ADVANCEDREMOTE_H
