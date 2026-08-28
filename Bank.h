#ifndef BANK_H
#define BANK_H

#include "Account.h"
#include <vector>

class Bank {
private:
    vector<Account> accounts;

public:
    void addAccount();
    void depositMoney();
    void withdrawMoney();
    void showAccount();

    void loadFromFile();
    void saveToFile();
};

#endif