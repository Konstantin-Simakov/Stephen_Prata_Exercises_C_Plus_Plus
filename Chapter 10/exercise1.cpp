// exercise1.cpp
// Realize methods of BankAccount class
// and demonstrate their work.

#include "exercise1.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main(void)
{
    BankAccount myAccount("Ivan", "1975285758", 2500.00);
    myAccount.display();

    double money;
    cout << "Add money to balance: ";
    cin >> money;
    myAccount.add(money);
    myAccount.display();

    cout << "Subtract money from balance: ";
    cin >> money;
    myAccount.subtract(money);
    myAccount.display();    
    
    return 0;
}

BankAccount::BankAccount(const string & name, const string & num, double bal)
{
    customerName = name;
    accountNumber = num;
    balance = bal;
}

void BankAccount::display(void) const
{
    cout << "Name: " << customerName << ", "
         << "account: " << accountNumber << ", "
         << "balance: " << balance << endl;
}

void BankAccount::add(double money)
{
    balance += money;
}

void BankAccount::subtract(double money)
{
    if (money > balance) {
        balance = 0.0;
    }
    else {
        balance -= money;
    }
}
