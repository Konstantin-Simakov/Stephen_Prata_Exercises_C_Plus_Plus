// exercise7.cpp -- Chapter 11.
// Compile along with exercise7_support.cpp.

#include "exercise7.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main(void)
{
    Complex a(3.0, 4.0);    // (3, 4i)
    Complex c;

    cout << "Enter a complex number (q to quit):\n";
    while (cin >> c) {
        cout << "c = " << c << endl;
        cout << "~c = " << ~c << endl;
        cout << "a = " << a << endl;
        cout << "a - c = " << a - c << endl;
        cout << "a * c = " << a * c << endl;
        cout << "2 * c = " << 2 * c << endl;

        cout << "Enter a complex number (q to quit):\n";
    }
    cout << "Done!\n";
    
    return 0;
}
