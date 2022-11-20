//
// Created by cristi on 11/18/22.
//

#include "AdvancedRemote.h"

void AdvancedRemote::mute() {
    device->setVolume(0);
}

AdvancedRemote::AdvancedRemote(Device *device) : Remote(device) {

}

