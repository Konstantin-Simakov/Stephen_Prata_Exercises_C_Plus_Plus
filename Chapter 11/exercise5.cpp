// exercise5.cpp -- Chapter 11
// Compile along with exercise5_support.cpp

#include "exercise5.h"
#include <iostream>

int main(void)
{
    using namespace std;

    Stonewt water(5, 13);
    Stonewt juice(35.56);
    cout << "Water: " << water << endl;
    cout << "Juice: " << juice << endl;

    water.modeDblLbs();
    juice.modeDblLbs();
    cout << "\nWater: " << water << endl;
    cout << "Juice: " << juice << endl;

    water.modeIntLbs();
    juice.modeIntLbs();
    cout << "\nWater: " << water << endl;
    cout << "Juice: " << juice << endl;

    cout << "\nWater + juice = " << water + juice << endl;
    cout << "Water * juice = " << water * juice << endl;
    cout << "Water - juice = " << water - juice << endl;
    cout << "Juice - water = " << juice - water << endl;
    
    cout << "\nBye!\n"; 
    
    return 0;
}
