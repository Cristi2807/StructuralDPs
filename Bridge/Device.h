//
// Created by cristi on 11/18/22.
//

#ifndef STRUCTURALDPS_DEVICE_H
#define STRUCTURALDPS_DEVICE_H


class Device {
protected:
    int volume{};
    int channel{};
    bool power{};

public:
    virtual bool isEnabled();

    virtual void enable();

    virtual void disable();

    [[nodiscard]] virtual int getVolume() const;

    virtual void setVolume(int volume);

    [[nodiscard]] virtual int getChannel() const;

    virtual void setChannel(int channel);

};


#endif //STRUCTURALDPS_DEVICE_H
