// exercie3.cpp -- Chapter 10
// Compile along with exercie3_support.cpp

#include "exercise3.h"
#include <iostream>

int main(void)
{
    using std::cout;
    using GOLF::SIZE;
    GOLF::Golf data[SIZE];
    int count = 0;

    cout << "Enter the names of a golf players and their handicaps\n";
    cout << "(up to " << GOLF::Golf::LEN - 1 << " caracters "
         << "or empty line for a name of player).\n\n";
    while (count < SIZE && data[count].setGolf()) {
        count++;
    }

    cout << "\nList of the players and their handicaps.\n";
    for (int i = 0; i < count; i++) {
        data[i].showGolf();
    }

    cout << "\nGoodbye!\n";

    return 0;
}
