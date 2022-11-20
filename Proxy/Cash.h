//
// Created by cristi on 11/20/22.
//

#ifndef STRUCTURALDPS_CASH_H
#define STRUCTURALDPS_CASH_H


#include "CashProtected.h"
#include "Person.h"

class Cash {
    CashProtected *realCash;
public:
    bool withdraw(Person &person, float amount);

    explicit Cash();

    float getBalance();
};


#endif //STRUCTURALDPS_CASH_H
