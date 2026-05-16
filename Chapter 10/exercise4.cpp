// exercise4.cpp -- Chapter 10
// Compile along with exercise4_support.cpp

#include "exercise4.h"
#include <iostream>

int main(void)
{
    using SALES::Sales;
    using SALES::QUARTERS;
    Sales first;
    Sales second;
    double sales[QUARTERS] = {5122.0, 11200.0, 4360.0, 8544.0};

    // Set sales.
    first.setSales();
    second = Sales(sales, QUARTERS);

    // Display sales.
    std::cout << "\nFirst ";
    first.showSales();
    std::cout << "\nSecond ";
    second.showSales();
    
    std::cout << "\nBye!\n";

    return 0;
}
