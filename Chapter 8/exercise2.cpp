// exercise2.cpp -- Chapter 8
#include <iostream>
#include <cstring>				// For strcpy()

struct Candy_bar {
	char name[40];
	double weight;
	int calories;
};

void set(Candy_bar &, const char * = "Millennium Munch", 
		double = 2.85, int = 350);
void show(const Candy_bar &);

int main(void)
{
	Candy_bar sweet;

	set(sweet);							// == set(sweet, "Millenium Munch", 2.85, 350);
	show(sweet);

	set(sweet, "Bunchi");				// == set(sweet, "Bunchi", 2.85, 350);
	show(sweet);

	set(sweet, "Smuzzi", 1.50);			// == set(sweet, "Smuzzi", 1.50, 350);
	show(sweet);

	set(sweet, "RotFront", 1.60, 280);
	show(sweet);

	return 0;
}

void set(Candy_bar & cb, const char * str, double wt, int cal)
{
	strcpy(cb.name, str);
	cb.weight = wt;
	cb.calories = cal;
}

void show(const Candy_bar & cb)
{
	using namespace std;
	cout << endl;
	cout << "Produced by: " << cb.name << endl;
	cout << "Weight: " << cb.weight << endl;
	cout << "Calories: " << cb.calories << endl; 
}
