// exercise7.cpp
// Plorg class realization.

#include "exercise7.h"
#include <iostream>
#include <cstring>

int main(void)
{
    Plorg plorg1;
    std::cout << "Plorg 1\n";
    plorg1.show();
    std::cout << "Change Plorg 1's CI to 30.\n";
    plorg1.changeCi(30);
    plorg1.show();
    std::cout << std::endl;
    
    Plorg plorg2("Sunny");
    std::cout << "Plorg 2\n";
    plorg2.show();
    std::cout << "Change Plorg 2's CI to 20.\n";
    plorg2.changeCi(20);
    plorg2.show();
    std::cout << std::endl;
    
    Plorg plorg3("Funny", 40);
    std::cout << "Plorg 3\n";
    plorg3.show();
    std::cout << "Change Plorg 3's CI to 70.\n";
    plorg3.changeCi(70);
    plorg3.show();
    std::cout << std::endl;

    std::cout << "Bye!\n";
    
    return 0;
}

Plorg::Plorg(const char * name, int ci)
{
    strncpy(mName, name, LEN - 1);
    mName[LEN - 1] = '\0';

    mCi = ci;
}

void Plorg::show(void) const
{
    std::cout << mName << ": " << mCi << std::endl;
}
