#include "Bank.h"
#include <fstream>

void Bank::addAccount() {
    Account acc;
    acc.createAccount();
    accounts.push_back(acc);
    cout << "Account created successfully!\n";
}

void Bank::depositMoney() {
    int accNo;
    double amount;

    cout << "Enter Account Number: ";
    cin >> accNo;

    for (auto &acc : accounts) {
        if (acc.getAccountNumber() == accNo) {
            cout << "Enter Amount: ";
            cin >> amount;
            acc.deposit(amount);
            cout << "Deposit successful!\n";
            return;
        }
    }

    cout << "Account not found!\n";
}

void Bank::withdrawMoney() {
    int accNo;
    double amount;

    cout << "Enter Account Number: ";
    cin >> accNo;

    for (auto &acc : accounts) {
        if (acc.getAccountNumber() == accNo) {
            cout << "Enter Amount: ";
            cin >> amount;
            acc.withdraw(amount);
            return;
        }
    }

    cout << "Account not found!\n";
}

void Bank::showAccount() {
    int accNo;
    cout << "Enter Account Number: ";
    cin >> accNo;

    for (const auto &acc : accounts) {
        if (acc.getAccountNumber() == accNo) {
            acc.display();
            return;
        }
    }

    cout << "Account not found!\n";
}

void Bank::loadFromFile() {
    ifstream file("accounts.txt");

    int accNo;
    string name;
    double balance;

    while (file >> accNo >> name >> balance) {
        accounts.push_back(Account(accNo, name, balance));
    }

    file.close();
}

void Bank::saveToFile() {
    ofstream file("accounts.txt");

    for (const auto &acc : accounts) {
        file << acc.getAccountNumber() << " "
             << acc.getName() << " "
             << acc.getBalance() << endl;
    }

    file.close();
}