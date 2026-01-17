// exercise4.h -- Chapter 9
// Header file for exercise4.cpp, exercise4_support.cpp

#ifndef EXERCISE4_H_
#define EXERCISE4_H_

namespace SALES
{
    const int QUARTERS = 4;

    struct Sales {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };

    void set_sales(Sales & s, const double arr[], int n);
    void set_sales(Sales & s);
    void show_sales(const Sales & s);
}

#endif  // For EXERCISE4_H_
