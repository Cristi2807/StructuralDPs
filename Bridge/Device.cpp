//
// Created by cristi on 11/18/22.
//

#include "Device.h"

bool Device::isEnabled() {
    return power;
}

void Device::enable() {
}

void Device::disable() {
}

int Device::getVolume() const {
    return volume;
}

void Device::setVolume(int vol) {
    Device::volume = vol;
}

int Device::getChannel() const {
    return channel;
}

void Device::setChannel(int chan) {
    Device::channel = chan;
}
