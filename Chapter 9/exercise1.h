// exercise1.h -- Chapter 9
// Header file for exercise1.cpp, exercise1_support.cpp

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
	const int SIZE = 10;		// Size of Golf array
	const int LEN = 20 + 1;		// Size of fullname array, +1 for '\0' in the end of a C-string

	struct Golf {
		char fullname[LEN];
		int handicap;
	};

	int set_golf(Golf & golf);
	void set_golf(Golf & golf, const char * name, int hc);
	void handicap(Golf & golf, int hc);
	void show_golf(const Golf & golf);
}

#endif		// For EXERCISE1_H_
