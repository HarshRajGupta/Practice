#include <iostream>
using namespace std;

void createlist(int* Arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		cin >> Arr[i];
	}
}

int binary(const int* Arr, int find, int lower, int upper)
{
	int mid = (lower + upper) / 2;

	if (Arr[mid] == find)
	{
		return mid + 1;
	}
	else if (Arr[mid] > find && Arr[lower] <= find)// 1st Half
	{
		return binary(Arr, find, lower, mid);
	}
	else if (Arr[mid] < find && Arr[upper - 1] >= find) // 2nd Half
	{
		return binary(Arr, find, mid, upper);
	}
	else if (Arr[lower] == find)
	{
		return lower;
	}
	else if (Arr[upper] == find)
	{
		return upper;
	}
	else
		return 0;// 0 means "Not Found"
}

int main(void)
{
	cout << "Array Size : ";
	int size {0};
	cin >> size;
	cout << "Enter Elements\n";
	int Arr[size] = {0};
	createlist(Arr, size);
	cout << "Number to Search for : ";
	int value {0};
	cin >> value;
	int pos = binary(Arr, value, 0, size);// pos is not index
	// pos is position appearing to the user
	cout << "\n========================================\n";
	if (pos != 0)
		cout << value << " is stored at position " << pos;
	else
		cout << "Number not found";
	cout << "\n========================================\n";

	return 0;
}