// exercise4.h -- Chapter 10
// Header file for exercise4.cpp, exercise4_support.cpp

#ifndef EXERCISE4_H_
#define EXERCISE4_H_

namespace SALES
{
    const int QUARTERS = 4;
    
    class Sales {
    private:
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    public:
        Sales(void);
        Sales(const double arr[], int n);
        void setSales(void);
        void showSales(void) const;        
    };
}

#endif  // For EXERCISE4_H_
