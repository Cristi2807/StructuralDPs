//
// Created by cristi on 11/20/22.
//

#ifndef STRUCTURALDPS_CASHPROTECTED_H
#define STRUCTURALDPS_CASHPROTECTED_H


class CashProtected {
private:
    float balance;
public:
    explicit CashProtected(float balance);

    bool withdraw(float amount);

    [[nodiscard]] float getBalance() const;
};


#endif //STRUCTURALDPS_CASHPROTECTED_H
