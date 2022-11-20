//
// Created by cristi on 11/20/22.
//

#ifndef STRUCTURALDPS_PERSON_H
#define STRUCTURALDPS_PERSON_H

#include <string>

class Person {
private:
    std::string name;
public:
    explicit Person(std::string name);

    [[nodiscard]] const std::string &getName() const;
};


#endif //STRUCTURALDPS_PERSON_H
