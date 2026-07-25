// exercise7_support.cpp -- Chapter 11.

#include "exercise7.h"

Complex::Complex(double rl, double im)
{
    real = rl;
    imaginary = im;
}

Complex::~Complex()
{
}

Complex Complex::operator+(const Complex & c) const
{
    return Complex(real + c.real, imaginary + c.imaginary);
}

Complex Complex::operator-(const Complex & c) const
{
    return Complex(real - c.real, imaginary - c.imaginary);
}

Complex Complex::operator*(const Complex & c) const
{
    return Complex(real * c.real - imaginary * c.imaginary, 
                   real * c.imaginary + imaginary * c.real);
}

Complex Complex::operator*(double n) const
{
    return Complex(n * real, n * imaginary);
}

Complex Complex::operator~() const
{
    return Complex(real, -imaginary);
}

Complex operator*(double n, const Complex & c)
{
    return c * n;
}

std::ostream & operator<<(std::ostream & os, const Complex & c)
{
    os << "(" << c.real << ", " << c.imaginary << "i)";

    return os;
}

std::istream & operator>>(std::istream & is, Complex & c)
{
    std::cout << "real: ";
    if (is >> c.real) {
        std::cout << "imaginary: ";
        is >> c.imaginary;
    }

    return is;
}
