// exercise1.cpp -- Chapter 11.
// Compile along with vect.cpp

#include "vect.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

int main(void)
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));

    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    
    ofstream fout;
    fout.open("exercise1.txt");

    cout << "Enter target distance (q to quit): ";
    while (cin >> target) {
        cout << "Enter step length: ";
        if (!(cin >> dstep)) {
            break;
        }
        // Write info to the file.
        fout << "Target distance: " << target;
        fout << ", Step Size: " << dstep << endl;
        
        fout << steps << ": " << result << endl;
        while (result.magVal() < target) {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;

            // Write info to the file.
            step.rectMode();
            fout << steps << ": " << result << endl;
        }

        cout << "After " << steps << " steps, the subject "
                "has the following location:\n";
        cout << result << endl;
        // Duble the info to the file.
        fout << "After " << steps << " steps, the subject "
                "has the following location:\n";
        fout << result << endl;
        result.polarMode();
        cout << " or\n" << result << endl;
        cout << "Average outward distance per step = "
             << result.magVal() / steps << "\n\n";
        // Duble the info to the file.
        fout << " or\n" << result << endl;
        fout << "Average outward distance per step = "
             << result.magVal() / steps << "\n\n";
        
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n') {
        continue;
    }
    
    return 0;
}
