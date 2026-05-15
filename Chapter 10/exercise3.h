// exercise3.h -- Chapter 10
// Header file for exercise3.cpp, exercise3_support.cpp

#ifndef EXERCISE1_H_
#define EXERCISE1_H_

#include <iostream>

inline void eatline(void)
{
    while (std::cin.get() != '\n')
        continue;
}

namespace GOLF
{
    const int SIZE = 10;                // Size of Golf array (static by default).
    
    class Golf {
    public:
        static const int LEN = 20 + 1;  // Size of fullname array, +1 for '\0' in the end of a C-string.
    private:
        char fullname[LEN];
        int handicap;
    public:
        Golf(const char * name = "", int hc = 0);
        int setGolf(void);
        void setHandicap(int hc);
        void showGolf() const;
    };
}

#endif      // For EXERCISE1_H_
