// exercise5.h -- Chapter 11.
#ifndef EXERCISE5_H_
#define EXERCISE5_H_

#include <iostream>

class Stonewt {
private:
    static const int LbsPerStn = 14;
    enum Mode {STONE, I_LBS, D_LBS} mode;
    int stone;
    double pdsLeft;
    double pounds;
public:
    explicit Stonewt(double lbs, Mode form = STONE);
    Stonewt(int stn, double lbs, Mode form = STONE);
    Stonewt();
    ~Stonewt();
    Stonewt operator+(const Stonewt & st) const;
    Stonewt operator-(const Stonewt & st) const;
    Stonewt operator*(const Stonewt & st) const;
    friend std::ostream & operator<<(std::ostream & os, const Stonewt & st);
    void modeStone();
    void modeIntLbs();
    void modeDblLbs();
};

#endif
