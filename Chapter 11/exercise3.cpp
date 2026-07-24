// exercise3.cpp -- use Vector class.
// Compile along with vect.cpp

#include "vect.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

int main(void)
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));

    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0, minSteps = 0, maxSteps = 0;
    double avgSteps = 0;
    double target;
    double dstep;
    int k, attempts;


    cout << "Enter the number of attempts (>0): ";
    if (!(cin >> attempts) || attempts <= 0) {
        cout << "Incorrect input.\n";
    } else {
        for (k = 0; k < attempts; k++) {
            target = rand() % 100 + 50;         // [50; 150]
            dstep = rand() % 20 + 10;           // [10; 30]
            
            while (result.magVal() < target) {
                direction = rand() % 360;
                step.reset(dstep, direction, Vector::POL);
                result = result + step;
                steps++;
            }
            cout << "After " << steps << " steps, the subject "
                    "has the following location:\n";
            cout << result << endl;

            avgSteps += steps;
            if (0 == k) {
                minSteps = maxSteps = steps;
            } else {
                minSteps = min(minSteps, steps);
                maxSteps = max(maxSteps, steps);
            }

            steps = 0;
            result.reset(0.0, 0.0);
        }
    }

    if (k > 0) {
        cout << "Min steps for " << attempts << " attempts: " << minSteps << endl;
        cout << "Max steps for " << attempts << " attempts: " << maxSteps << endl;
        cout << "Average steps for " << attempts << " attempts: " 
             << round(avgSteps / attempts) << endl;
    }

    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n') {
        continue;
    }
    
    return 0;
}
