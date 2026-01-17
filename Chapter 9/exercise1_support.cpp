// exercie1_support.cpp -- Chapter 9
// Compile along with exercie1.cpp

#include "exercise1.h"		// For struct definition and function prototypes
#include <iostream>
#include <cstring>			// For strcpy()
#include <cstdlib>			// For exit(), EXIT_FAILURE

namespace GOLF
{
	int set_golf(Golf & golf)
	{
		using std::cout;
		using std::cin;
		char temp[LEN];			// For function	realization of setgolf(Golf &, const char *, int)
		int hc;					// For function realization of handicap()
		int ret_val = 1;		// Initially suppose an input string is non-empty one

		cout << "Enter player fullname: ";
		while (!cin.getline(temp, LEN))
		{
			if (cin.eof())
			{
				cout << "\n\nError: EOF state.\n";
				exit(EXIT_FAILURE);
			}
			else
			{
				cout << "\n\nError: couldn\'t read a string.\n";
				exit(EXIT_FAILURE);
			}
		}

		if (!temp[0])         // Empty line is entered.
			ret_val = 0;
		else
		{
			cout << "Enter your handicap: ";
			while (!(cin >> hc) || hc < 0)
			{
				cin.clear();
				eatline();
				cout << "Bad input. Only integer >= 0: ";
			}
            eatline();

			handicap(golf, hc);
			set_golf(golf, temp, hc);
		}

		return ret_val;
	}

	void set_golf(Golf & golf, const char * name, int hc)
	{
		strncpy(golf.fullname, name, LEN - 1);
		golf.fullname[LEN - 1] = '\0';

		golf.handicap = hc;
	}

	void handicap(Golf & golf, int hc)
	{
		golf.handicap =  hc;
	}

	void show_golf(const Golf & golf)
	{
		using std::cout;
		using std::endl;

		cout << "Player: " << golf.fullname
			 << ", handicap: " << golf.handicap << endl;
	}
}
