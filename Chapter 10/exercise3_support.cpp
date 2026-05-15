// exercie3_support.cpp -- Chapter 10
// Compile along with exercie3.cpp

#include "exercise3.h"
#include <iostream>
#include <cstring>
#include <cstdlib>

namespace GOLF
{
    Golf::Golf(const char * name, int hc)
    {
        strncpy(fullname, name, LEN - 1);
        fullname[LEN - 1] = '\0';

        handicap = hc;
    }

    int Golf::setGolf(void)
    {
        using std::cout;
        using std::cin;
        char temp[LEN];
        int hc;
        int retVal = 1;     // Initially suppose an input string is non-empty one.

        cout << "Enter player fullname: ";
        while (!cin.getline(temp, LEN)) {
            if (cin.eof()) {
                cout << "\n\nError: EOF state.\n";
                exit(EXIT_FAILURE);
            } else {
                cout << "\n\nError: couldn\'t read a string.\n";
                exit(EXIT_FAILURE);
            }
        }

        if (!temp[0]) {         // Empty line is entered.
            retVal = 0;
        } else {
            cout << "Enter your handicap: ";
            while (!(cin >> hc) || hc < 0) {
                cin.clear();
                eatline();
                cout << "Bad input. Only integer >= 0: ";
            }
            eatline();

            setHandicap(hc);
            *this = Golf(temp, hc);
        }

        return retVal;
    }

    void Golf::setHandicap(int hc)
    {
        handicap = hc;
    }

    void Golf::showGolf(void) const
    {
        std::cout << "Player: " << fullname
                  << ", handicap: " << handicap << std::endl;
    }
}
