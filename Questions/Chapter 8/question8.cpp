// question8.cpp -- Chapter 8
#include <iostream>

struct box {
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

// Function template:
template <typename Type>
Type larger(const Type & t1, const Type & t2);
// Implicit specialization:
template <> box larger(const box & b1, const box & b2);
// Ordinary function:
void set_volume(box & b);

int main(void)
{
	using namespace std;
	box b1 = {"Inc1", 5, 5, 5};
	box b2 = {"Inc2", 6, 6, 6};
	set_volume(b1);
	set_volume(b2);

	cout << "Larger from " << b1.maker << " and " << b2.maker 
		 << " is " << larger(b1, b2).maker << ".\n";
		 
	// The function larger() will generate temporary variables within its definition scope.
	cout << "Larger from " << 5 << " and " << 3 << " is " << larger(5, 3) << ".\n";

	return 0;
}

template <typename Type>
Type larger(const Type & t1, const Type & t2)
{
	return t1 > t2 ? t1 : t2;
}

template <> box larger(const box & b1, const box & b2)
{
	return b1.volume > b2.volume ? b1 : b2;
}

void set_volume(box & b)
{
	b.volume = b.height * b.width * b.length;
}
