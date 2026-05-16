// exercise4_support.cpp -- Chapter 10
// Compile along with exercise4.cpp

#include "exercise4.h"
#include <iostream>

namespace
{
    double minimum(const double arr[], int n);
    double maximum(const double arr[], int n);
}

namespace SALES
{
    Sales::Sales(void)
    {
        for (int i = 0; i < QUARTERS; ++i) {
            sales[i] = 0.0;
        }
        average = min = max = 0.0;
    }

    Sales::Sales(const double arr[], int n)
    {
        if (n > QUARTERS) {
            n = QUARTERS;
        }

        double total = 0.0;
        for (int i = 0; i < n; i++) {
            total += arr[i];
            sales[i] = arr[i];
        }
        average = total / n;
        
        min = minimum(arr, n);
        max = maximum(arr, n);
    }

    void Sales::setSales(void)
    {
        using std::cout;
        using std::cin;
        double temp[QUARTERS];
        int i;
        
        cout << "Enter " << QUARTERS << " sales for every quartor accordingly.\n";
        for (i = 0; i < QUARTERS; i++) {
            cout << "#" << i + 1 << ": ";
            while (!(cin >> temp[i]) || temp[i] < 0) {
                cout << "Incorrect input. Only number >= 0: ";
                cin.clear();
                while (cin.get() != '\n') {
                    continue;
                }
            }
        }

        *this = Sales(temp, i);
    }

    void Sales::showSales(void) const
    {
        using std::cout;
        using std::endl;

        cout << "Sales: ";
        for (int i = 0; i < QUARTERS; i++) {
            cout << sales[i] << " ";
        }
        cout << endl;

        cout << "Average: " << average << endl;
        cout << "Max sale: " << max << endl;
        cout << "Min sale: " << min << endl;
    }
}

namespace
{
    double minimum(const double arr[], int n)
    {
        double m = arr[0];
        for (int i = 1; i < n; i++) {
            if (m > arr[i]) {
                m = arr[i];
            }
        }

        return m;
    }

    double maximum(const double arr[], int n)
    {
        double m = arr[0];
        for (int i = 1; i < n; i++) {
            if (m < arr[i]) {
                m = arr[i];
            }
        }

        return m;
    }
}
