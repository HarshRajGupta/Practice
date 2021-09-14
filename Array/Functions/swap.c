#include <stdio.h>
#define MAX 100000

void ScanArray(int* Arr, int n)
{
	for (int i=0; i<n; ++i)
	{
		scanf("%d",Arr + i);
	}
}

void PrintArray(int* Arr, int n)
{
	printf("\n========================================\n");
	for (int i=0; i<n; ++i)
	{
		printf("%d ", *(Arr + i));
	}
	printf("\n========================================\n");
}

void swap(int* Arr, int n)
{
	for (int i=0; i<n/2; ++i)
	{
		int c;
		c = *(Arr + i);
		*(Arr + i) = *(Arr + (n-i-1));
		*(Arr + (n-i-1)) = c;
	}
}

int main(void)
{
	printf("Array Size : ");
	int n;
	scanf("%d",&n);
	printf("Enter Elements\n");
	int input[MAX] = {0};
	ScanArray(input, n);
	swap(input, n);
	printf("Reverse Array\n");
	PrintArray(input, n);
	return 0;
}