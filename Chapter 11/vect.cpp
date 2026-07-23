// vect.cpp -- Vector class methods.
#include <cmath>
#include "vect.h"
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{
    const double RAD_TO_DEG = 45.0 / atan(1.0);

    void Vector::setMag(void)
    {
        mag = sqrt(x * x + y * y);
    }

    void Vector::setAng(void)
    {
        if (0.0 == x && 0.0 == y) {
            ang = 0.0;
        } else {
            ang = atan2(y, x);
        }
    }

    void Vector::setX(void)
    {
        x = mag * cos(ang);
    }

    void Vector::setY(void)
    {
        y = mag * sin(ang);
    }

    Vector::Vector(void)
    {
        x = y = mag = ang = 0.0;
        mode = RECT;
    }

    Vector::Vector(double n1, double n2, Mode form)
    {
        reset(n1, n2, form);
    }

    void Vector::reset(double n1, double n2, Mode form)
    {
        mode = form;
        if (RECT == form) {
            x = n1;
            y = n2;
            setMag();
            setAng();
        } else if (POL == form) {
            mag = n1;
            ang = n2 / RAD_TO_DEG;
            setX();
            setY();
        } else {
            cout << "Incorrect 3rd argument to Vector() -- ";
            cout << "vector set to 0.\n";
            x = y = mag = ang = 0.0;
            mode = RECT;
        }
    }

    Vector::~Vector(void)
    {
    }

    void Vector::polarMode(void)
    {
        mode = POL;
    }
    
    void Vector::rectMode(void)
    {
        mode = RECT;
    }

    Vector Vector::operator+(const Vector & b) const
    {
        return Vector(x + b.x, y + b.y);
    }

    Vector Vector::operator-(const Vector & b) const
    {
        return Vector(x - b.x, y - b.y);
    }

    Vector Vector::operator-(void) const
    {
        return Vector(-x, -y);
    }

    Vector Vector::operator*(double n) const
    {
        return Vector(n * x, n * y);
    }

    Vector operator*(double n, const Vector & a)
    {
        return a * n;
    }

    std::ostream & operator<<(std::ostream & os, const Vector & v)
    {
        if (Vector::RECT == v.mode) { 
            os << "(x, y) = (" << v.x << ", " << v.y << ")";
        } else if (Vector::POL == v.mode) {
            os << "(m, a) = (" << v.mag << ", " << v.ang * RAD_TO_DEG << ")";
        } else {
            os << "Vector object mode is invalid.";
        }

        return os;
    }
}
