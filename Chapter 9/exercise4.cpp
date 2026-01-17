// exercise4.cpp -- Chapter 9
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

    // Setting sales
    set_sales(first);
    set_sales(second, sales, QUARTERS);

    // Displaying sales
    std::cout << "\nFirst ";
    show_sales(first);
    std::cout << "\nSecond ";
    show_sales(second);

    std::cout << "\nBye!\n";

    return 0;
}
