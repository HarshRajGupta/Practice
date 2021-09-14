#include <iostream>
using namespace std;

void ScanArray(int* Arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		cin >> *(Arr + i);
	}
}

void PrintArray(int* Arr, int n)
{
	printf("========================================\n");
	for (int i = 0; i < n; ++i)
	{
		cout << *(Arr + i) << " "
	}
	printf("\n========================================\n");
}

void swap(int* r1, int* r2)
{
	int temp = *r1;
	*r1 = *r2;
	*r2 = temp;
}

int partition(int* Arr, int low, int up)
{
	int pivot = *(Arr + (low + up) / 2);
	int part1 = low;
	int part2 = up;
	while (part1 < part2)
	{
		if (*(Arr + part1) < pivot)
			++part1;
		if (*(Arr + part2) > pivot)
			--part2;
		if ((*(Arr + part1) > pivot) && (*(Arr + part2) < pivot))
			swap(Arr + part1, Arr + part2);
	}
	swap(Arr + part1, Arr + (low + up) / 2);
	return part1;
}

void quickSort(int* Arr, int low, int up)
{
	if (low < up)
	{
		int pivot = partition(Arr, low, up);
		quickSort(Arr, low, pivot-1);
		quickSort(Arr, pivot+1, up);
	}
}

int main(void)
{
	cout << "Array Size = ";
	int size {0};
	cin >> size;
	int Arr[size] = {0};
	ScanArray(Arr, size);
	quickSort(Arr, 0, size-1);
	PrintArray(Arr, size);
	return 0;
}