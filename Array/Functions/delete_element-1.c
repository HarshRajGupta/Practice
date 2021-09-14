#include <stdio.h>
#define MAX 100000

void ScanArray(int* Arr, int n)
{
	for (int i=0; i<n; ++i)
	{
		scanf("%d",Arr + i);
	}
}

int delete_element(int* Arr, int n, int d)
{
	for (int i=0; i<n; ++i)
	{
		if (*(Arr + i) == d)
		{
			for (int j=i; j<n-1; ++j)
			{
				*(Arr + j) = *(Arr + (j+1));
			}
			return 1;
		}
	}
	printf("\n========================================\n");
	printf("Number not found\n");
	printf("\n========================================\n");
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
	printf("Number to DELETE : ");
	int search;
	scanf("%d", &search);
	n = n - delete_element(input, n, search);
	printf("\nResultant Array\n");
	PrintArray(input, n);
	return 0;
}