// exercise2.cpp -- Chapter 10
// Test Person class.

#include "exercise2.h"
#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    Person one;
    one.show();
    one.formalShow();

    Person two("Smythecraft");
    two.show();
    two.formalShow();

    Person three("Dimwiddy", "Sam");
    three.show();
    three.formalShow();
    
    return 0;
}

Person::Person(const string & ln, const char * fn)
{
    lname = ln;

    strncpy(fname, fn, LIMIT - 1);
    fname[LIMIT - 1] = '\0';
}

void Person::show(void) const
{
    cout << lname << ' ' << fname << endl;
}

void Person::formalShow(void) const
{
    cout << fname << ", " << lname << endl;
}
