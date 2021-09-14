#include <stdio.h>
#define MAX 100000

void ScanArray(int* Arr, int n)
{
	for (int i = 0; i < n; ++i)
		scanf("%d", Arr + i);
}

int binary(const int* Arr, int find, int lower, int upper)
{
	int mid = (lower + upper) / 2;

	if (Arr[mid] == find)
	{
		return mid + 1;
	}
	else if (Arr[mid] > find && Arr[lower] < find)// 1st Half
	{
		return binary(Arr, find, lower, mid);
	}
	else if (Arr[mid] < find && Arr[upper ] > find) // 2nd Half
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

void Result(int search, int pos)
{
	printf("\n========================================\n");
	if (pos != 0)
		printf("%d found at Postion %d", search, pos );
	else
		printf("Number not Found");
	printf("\n========================================\n");
}
int main(void)
{
	printf("Array Size : ");
	int n;
	scanf("%d", &n);
	printf("Enter Elements\n");
	int input[MAX] = {0};
	ScanArray(input, n);
	printf("Number to Search for : ");
	int search;
	scanf("%d", &search);
	int pos;
	pos = binary(input, search, 0, n-1);
	Result(search, pos);
	return 0;
}