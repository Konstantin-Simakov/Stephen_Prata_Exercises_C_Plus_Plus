// exercise2.h -- Chapter 11.
#ifndef EXERCISE2_H_
#define EXERCISE2_H_

#include <iostream>

namespace VECTOR 
{
    class Vector {
    public:
        enum Mode {RECT, POL};
    private:
        double x;
        double y;
        Mode mode;
    public:
        Vector();
        Vector(double n1, double n2, Mode form = RECT);
        void reset(double n1, double n2, Mode form = RECT);
        ~Vector();
        double xVal() const {return x;}
        double yVal() const {return y;}
        double magVal() const;
        double angVal() const;
        void polarMode();
        void rectMode();

        // Opreation overloading.
        Vector operator+(const Vector & b) const;
        Vector operator-(const Vector & b) const;
        Vector operator-() const;
        Vector operator*(double n) const;

        // Friends.
        friend Vector operator*(double n, const Vector & a);
        friend std::ostream & operator<<(std::ostream & os, const Vector & v);
    };
}

#endif
