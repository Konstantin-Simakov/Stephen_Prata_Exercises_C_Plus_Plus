// exercise6_version2.cpp -- Chapter 8
#include <iostream>
#include <cstring>				// For strlen()

template <typename T>
T maxn(T arr[], int n);
template <> const char * maxn(const char * arr[], int n);

int main(void)
{
	using namespace std;
	const int SIZE_1 = 6;
	const int SIZE_2 = 4;
	const int SIZE_3 = 5;
	int arr1[SIZE_1] = {1, 2, 3, 4, 5, 6};
	double arr2[SIZE_2] = {1.0, 2.0, 3.0, 4.0};
	const char * arr3[SIZE_3] = {
		"Hello, world!", 
		"Welcome to the \'Guest\'!",
		"My name is Option.", 
		"And yours?", 
		"Good, dear friend!"
	};

	cout << "The max element of the int array is " << maxn(arr1, SIZE_1) << endl;
	cout << "The max element of the double array is " << maxn(arr2, SIZE_2) << endl;
	cout << "The max element of the char pointer array is \"" << maxn(arr3, SIZE_3) << "\"\n";

	return 0;
}

template <typename T>
T maxn(T arr[], int n)
{
	T max = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}

	return max;
}

template <> const char * maxn(const char * arr[], int n)
{
	const char * max_len_str = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (strlen(max_len_str) < strlen(arr[i]))
			max_len_str = arr[i];
	}

	return max_len_str;
}
