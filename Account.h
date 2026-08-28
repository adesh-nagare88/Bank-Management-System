#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    int accountNumber;
    string name;
    double balance;

public:
    Account();
    Account(int accNo, string n, double bal);

    void createAccount();
    void deposit(double amount);
    bool withdraw(double amount);
    void display() const;

    int getAccountNumber() const;
    string getName() const;
    double getBalance() const;
};

#endif