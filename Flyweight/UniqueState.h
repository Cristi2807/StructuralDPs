//
// Created by cristi on 11/21/22.
//

#ifndef STRUCTURALDPS_UNIQUESTATE_H
#define STRUCTURALDPS_UNIQUESTATE_H


#include <string>

class UniqueState {
private:
    std::string owner;
    std::string plates;

public:
    UniqueState(std::string owner, std::string plates);

    const std::string &getOwner() const;

    const std::string &getPlates() const;

};


#endif //STRUCTURALDPS_UNIQUESTATE_H
