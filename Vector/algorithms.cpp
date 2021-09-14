#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

typedef vector<int> v_int;

void create(v_int &vec, int n)
{
	for (int i = 0; i < n; ++i)
	{
		int num;
		cin >> num;
		vec.push_back(num);
	}
}

// void sort(int* begin, int* end)
// {
// 	*end = *begin;
// 	*begin = 0;
// }

void print(v_int vec)
{
	cout << "\n========================================\n";

	for (auto i : vec)
	{
		cout << i << " ";
	}

	cout << "\n========================================\n";
}

int main()
{
	cout << "Vector Size : ";
	int n;
	cin >> n;
	cout << "Enter numbers" << endl;
	v_int vec;
	create(vec, n);
	print(vec);
	sort(vec.begin(), vec.end());
	print(vec);
	return 0;
}