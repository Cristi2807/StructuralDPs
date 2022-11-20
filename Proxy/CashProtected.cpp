//
// Created by cristi on 11/20/22.
//

#include "CashProtected.h"

CashProtected::CashProtected(float balance) : balance(balance) {}

bool CashProtected::withdraw(float amount) {
    if (amount > balance)
        return false;

    balance -= amount;
    return true;
}

float CashProtected::getBalance() const {
    return balance;
}
