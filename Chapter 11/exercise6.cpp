// exercise6.cpp -- Chapter 11.
// Compile along with exercise6_support.cpp.

#include "exercise6.h"
#include <iostream>

Stonewt minObj(const Stonewt arr[], int n);
Stonewt maxObj(const Stonewt arr[], int n);
int showObjs(const Stonewt arr[], int n, const Stonewt & trg);

int main(void)
{
    using namespace std;
    const int SW_OBJS = 6;
    Stonewt objects[SW_OBJS] = {
        Stonewt(11, 12),
        Stonewt(8, 5),
        Stonewt(11, 0),
    };
    Stonewt target(11, 0);
    double stn, lbs;

    for (int i = 3; i < SW_OBJS; ++i) {
        cout << "#" << i << endl;
        cout << "Enter the number of stones: ";
        cin >> stn;
        cout << "Enter the number of pounds: ";
        cin >> lbs;
        objects[i] = Stonewt(stn, lbs);
        cout << endl;
    }

    // Show results.
    cout << "The smallest element is ";
    minObj(objects, SW_OBJS).showStn();
    cout << "The largest element is ";
    maxObj(objects, SW_OBJS).showStn();
    cout << "The number of elements >= 11 stone is "
         << showObjs(objects, SW_OBJS, target) << endl;
    
    return 0;
}

Stonewt minObj(const Stonewt arr[], int n)
{
    Stonewt min = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}

Stonewt maxObj(const Stonewt arr[], int n)
{
    Stonewt max = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int showObjs(const Stonewt arr[], int n, const Stonewt & trg)
{
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] >= trg) {
            count++;
        }
    }

    return count;
}
