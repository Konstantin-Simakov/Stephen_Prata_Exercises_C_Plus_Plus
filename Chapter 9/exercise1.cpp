// exercie1.cpp -- Chapter 9
// Compile along with exercie1_support.cpp

#include <iostream>
#include "exercise1.h"      // For struct definition and function prototypes

int main(void)
{
    using std::cout;
    using GOLF::SIZE;
    GOLF::Golf data[SIZE];
    int count = 0;

    cout << "Enter the names of a golf players and their handicaps\n";
    cout << "(up to " << GOLF::LEN - 1 << " caracters "
         << "or empty line for a name of player).\n\n";
    while (count < SIZE && GOLF::set_golf(data[count]))
        count++;

    cout << "\nList of the players and their handicaps.\n";
    for (int i = 0; i < count; i++)
        GOLF::show_golf(data[i]);

    cout << "\nGoodbye!\n";

    return 0;
}
