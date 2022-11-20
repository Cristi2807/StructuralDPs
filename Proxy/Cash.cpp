//
// Created by cristi on 11/20/22.
//

#include "Cash.h"

bool Cash::withdraw(Person &person, float amount) {

    if (person.getName() == "Cristian" || person.getName() == "Adrian")
        return realCash->withdraw(amount);
    else
        return false;
}

float Cash::getBalance() {
    return realCash->getBalance();
}

Cash::Cash() {
    realCash = new CashProtected(500);
}

