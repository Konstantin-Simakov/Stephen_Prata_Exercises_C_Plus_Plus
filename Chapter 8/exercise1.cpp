// exercise1.cpp -- Chapter 8
// It's not the best exercise... See the output() definition below.
#include <iostream>

// Target function
void output(const char *, int = 0);

// Small driver
int main(void)
{
	char str[] = "Hello, world!";

	output(str);					// 1 line
	output(str);					// 1 line
	output(str);					// 1 line
	output("Hello, buffet!", -1);	// 3 lines
	output(str, 0);					// 1 line
	output(str, 1);					// Total: 5 lines before this line, so 5 lines
	output(str, 10);				// 6 lines

	return 0;
}

void output(const char * str, int arg)
{
	using namespace std;
	static int count = 1;
	cout << count << endl;			// Function calls number

	if (0 == arg)
		cout << str << endl;
	else
	{	
		for (int i = 1; i <= count; i++)
			cout << str << endl;
	}
	
	++count;						// Function calls count
}
