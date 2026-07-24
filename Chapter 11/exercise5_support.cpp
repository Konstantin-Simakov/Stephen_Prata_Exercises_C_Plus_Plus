// exercise5_support.cpp -- Chapter 11.

#include "exercise5.h"
#include <iostream>
using std::cout;

Stonewt::Stonewt(double lbs, Mode form)
{
    mode = form;
    stone = int(lbs) / LbsPerStn;
    pdsLeft = int(lbs) % LbsPerStn + lbs - int(lbs);
    pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs, Mode form)
{
    mode = form;
    stone = stn;
    pdsLeft = lbs;
    pounds = stn * LbsPerStn + lbs;
}

Stonewt::Stonewt()
{
    mode = STONE;
    stone = pounds = pdsLeft = 0;
}

Stonewt::~Stonewt()
{
}

void Stonewt::modeStone()
{
    mode = STONE;
}

void Stonewt::modeIntLbs()
{
    mode = I_LBS;
}

void Stonewt::modeDblLbs()
{
    mode = D_LBS;
}

Stonewt Stonewt::operator+(const Stonewt & st) const
{
    return Stonewt(pounds + st.pounds);
}

Stonewt Stonewt::operator-(const Stonewt & st) const
{
    if (pounds > st.pounds) {
        return Stonewt(pounds - st.pounds);
    } else {
        return Stonewt();
    }
}

Stonewt Stonewt::operator*(const Stonewt & st) const
{
    return Stonewt(pounds * st.pounds);
}

std::ostream & operator<<(std::ostream & os, const Stonewt & st)
{
    if (Stonewt::STONE == st.mode) {
        os << st.stone << " stone, " << st.pdsLeft << " pounds";
    } else if (Stonewt::I_LBS == st.mode) {
        os << int(st.pounds + 0.5) << " pounds";
    } else if (Stonewt::D_LBS == st.mode) {
        os << st.pounds << " pounds";
    }

    return os;
}
