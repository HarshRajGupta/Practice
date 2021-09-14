#include <stdio.h>
#define MAX 100000

void ScanArray(int* Arr, int n)
{
	for (int i=0; i<n; ++i)
	{
		scanf("%d",Arr + i);
	}
}

int linear(int* Arr, int n, int s)
{
	for (int i=0; i<n; ++i)
	{
		if (*(Arr + i) == s)
		{
			return (i+1);
		}
	}
	return 0;
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


int main(void)
{
	printf("Array Size : ");
	int n;
	scanf("%d",&n);
	printf("Enter Elements\n");
	int input[MAX] = {0};
	ScanArray(input, n);
	printf("Number to Search for : ");
	int search;
	scanf("%d", &search);
	int pos;
	pos = linear(input, n, search);
	printf("\n========================================\n");
	if(pos != 0)
		printf("%d is located at Position %d\n", search, pos);
	else
		printf("Number not found\n");
	printf("\n========================================\n");
	return 0;
}