#include <stdio.h>
#define MAX 100000

void ScanArray(int* Arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", Arr + i);
	}
}

int sum(int* Arr, int n)
{
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += *(Arr + i);
	}
	return sum;
}

int main(void)
{
	printf("Array Size : ");
	int n = 0;
	scanf("%d", &n);
	printf("Enter Elements\n");
	int a[MAX] = {0};
	ScanArray(a, n);
	printf("\n========================================\n");
	printf("Sum of Array = %d", sum(a, n) );
	printf("\n========================================\n");
	return 0;
}