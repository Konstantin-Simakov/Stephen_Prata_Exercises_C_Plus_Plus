// exercise6_support.cpp -- Chapter 11.

#include "exercise6.h"
#include <iostream>
using std::cout;

Stonewt::Stonewt(double lbs)
{
    stone = int(lbs) / LbsPerStn;
    pdsLeft = int(lbs) % LbsPerStn + lbs - int(lbs);
    pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pdsLeft = lbs;
    pounds = stn * LbsPerStn + lbs;
}

Stonewt::Stonewt()
{
    stone = pounds = pdsLeft = 0;
}

Stonewt::~Stonewt()
{
}

void Stonewt::showStn() const
{
    cout << stone << " stone, " << pdsLeft << " pounds\n";
}

void Stonewt::showLbs() const
{
    cout << pounds << " pounds\n";
}
