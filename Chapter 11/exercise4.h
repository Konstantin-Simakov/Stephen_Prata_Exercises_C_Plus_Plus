// exercise4.h -- Chapter 11.
#ifndef EXERCISE4_H_
#define EXERCISE4_H_

#include <iostream>

class Time {
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m = 0);
    void addMin(int m);
    void addHr(int h);
    void reset(int h = 0, int m = 0);
public:
    friend Time operator+(const Time & t1, const Time & t2);
    friend Time operator-(const Time & t1, const Time & t2);
    friend Time operator*(const Time & t, double n);
    friend Time operator*(double m, const Time & t) {return t * m;}         // Inline definition.
    friend std::ostream & operator<<(std::ostream & os, const Time & t);
};

#endif
