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

void rotate_right(int* Arr, int n)
{
	int c = *(Arr + (n-1));

	for (int i=n-1; i>0; --i)
	{
		*(Arr + i) = *(Arr + (i-1));
	}

	*(Arr + 0) = c;
}

int main(void)
{
	printf("Array Size : ");
	int n;
	scanf("%d",&n);
	printf("Enter Elements\n");
	int input[MAX] = {0};
	ScanArray(input, n);
	rotate_right(input, n);
	printf("Reverse Array\n");
	PrintArray(input, n);
	return 0;
}