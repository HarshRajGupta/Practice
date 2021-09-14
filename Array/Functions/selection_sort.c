#include <stdio.h>
#define MAX 100000

void ScanArray(int* Arr, int n)
{
	for (int i=0; i<n; ++i)
	{
		scanf("%d",Arr + i);
	}
}

void Selection(int* Arr, int n)
{
	for (int i=0; i<n; ++i)
	{
		for (int j=n-1; j>0; --j)
		{
			if (*(Arr + (j-1)) > *(Arr + j))
			{
				int c;
				c = *(Arr + (j-1));
				*(Arr + (j-1)) = *(Arr + j);
				*(Arr + j) = c;
			}
		}
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

int main(void)
{
	printf("Array Size : ");
	int n;
	scanf("%d",&n);
	printf("Enter Elements\n");
	int input[MAX] = {0};
	ScanArray(input, n);
	Selection(input, n);
	printf("Sorted Array\n");
	PrintArray(input, n);
	return 0;
}