#include "Account.h"

Account::Account() {
    accountNumber = 0;
    name = "";
    balance = 0;
}

Account::Account(int accNo, string n, double bal) {
    accountNumber = accNo;
    name = n;
    balance = bal;
}

void Account::createAccount() {
    cout << "Enter Account Number: ";
    cin >> accountNumber;

    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Initial Balance: ";
    cin >> balance;
}

void Account::deposit(double amount) {
    balance += amount;
}

bool Account::withdraw(double amount) {
    if (amount > balance) {
        cout << "Insufficient balance!\n";
        return false;
    }
    balance -= amount;
    return true;
}

void Account::display() const {
    cout << "\nAccount Number: " << accountNumber;
    cout << "\nName: " << name;
    cout << "\nBalance: " << balance << endl;
}

int Account::getAccountNumber() const {
    return accountNumber;
}

string Account::getName() const {
    return name;
}

double Account::getBalance() const {
    return balance;
}