// exercise7.h -- Chapter 11.

#ifndef EXERCISE7_H_
#define EXERCISE7_H_

#include <iostream>

class Complex {
private:
    double real;
    double imaginary;
public:
    Complex (double rl = 0, double im = 0);
    ~Complex();
    // Overloaded operations.
    Complex operator+(const Complex & c) const;
    Complex operator-(const Complex & c) const;
    Complex operator*(const Complex & c) const;
    Complex operator*(double n) const;
    Complex operator~() const;                      // Complex conjugate.
    // Friends.
    friend Complex operator*(double n, const Complex & c);
    friend std::ostream & operator<<(std::ostream & os, const Complex & c);
    friend std::istream & operator>>(std::istream & is, Complex & c);
};

#endif
