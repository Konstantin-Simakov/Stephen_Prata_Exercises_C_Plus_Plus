// exercise1.h -- Chapter 10
// Compile with exercise1.cpp

#ifndef EXERCISE1_H_
#define EXERCISE1_H_

#include <string>
using std::string;

class BankAccount {
private:
    string customerName;
    string accountNumber;
    double balance;
public:
    BankAccount(const string & name, const string & num, double balance);
    void display(void) const;
    void add(double money);
    void subtract(double money);
};

#endif
