#include <stdio.h>
#define MAX 50

void ScanArray(int* Arr, int n)
{
	for (int i=0; i<n; ++i)
	{
		int num;
		scanf("%d", &num);
		*(Arr + i) = num;
	}
}

void insetion(int* Arr, int n)
{
	for (int i=1; i<n; ++i)
	{
		int j, c;
		c = *(Arr + i);

		for (j=i-1; c<*(Arr + j) && j>=0; --j)
		{
			*(Arr + (j+1)) = *(Arr + j);
		}
		
		*(Arr + (j+1)) = c;
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
	insetion(input, n);
	printf("Sorted Array\n");
	PrintArray(input, n);
	return 0;
}