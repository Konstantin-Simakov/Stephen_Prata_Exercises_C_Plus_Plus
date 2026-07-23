// vect.h -- Vector class with << operation and coordinate mode supporting.
#ifndef VECT_H_
#define VECT_H_

#include <iostream>

namespace VECTOR 
{
    class Vector {
    public:
        enum Mode {RECT, POL};
    private:
        double x;
        double y;
        double mag;
        double ang;
        Mode mode;

        void setMag(void);
        void setAng(void);
        void setX(void);
        void setY(void);
    public:
        Vector(void);
        Vector(double n1, double n2, Mode form = RECT);
        void reset(double n1, double n2, Mode form = RECT);
        ~Vector(void);
        double xVal(void) const {return x;}
        double yVal(void) const {return y;}
        double magVal(void) const {return mag;}
        double angVal(void) const {return ang;}
        void polarMode(void);
        void rectMode(void);

        // Opreation overloading.
        Vector operator+(const Vector & b) const;
        Vector operator-(const Vector & b) const;
        Vector operator-(void) const;
        Vector operator*(double n) const;

        // Friends.
        friend Vector operator*(double n, const Vector & a);
        friend std::ostream & operator<<(std::ostream & os, const Vector & v);
    };
}

#endif
