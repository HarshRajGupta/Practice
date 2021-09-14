#include <stdio.h>
#define MAX 100000

void ScanArray(int* Arr, int n)
{
	for (int i=0; i<n; ++i)
	{
		scanf("%d",Arr + i);
	}
}

void Frequency(int* Arr, int* Arr2, int n)
{
	for (int i=0; i<n; ++i)
	{
		int m = 1;

		for (int j=i+1; j<n; ++j)
		{
			if (*(Arr + i) == *(Arr + j))
			{
				++m;
				*(Arr2 + j) = 0;
			}
		}

		if (*(Arr2 + i) != 0)
		    *(Arr2 + i) = m;
	}
}

void PrintArray(int* Arr, int* freq, int n)
{
	printf("\n========================================\n");
	for (int i=0; i<n; ++i)
	{
		if(*(freq + i) != 0)
		    printf("%d comes %d times\n", *(Arr + i),*(freq + i));
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
	int freq[MAX] = {0};//Frequency of the elements
	Frequency(input, freq, n);
	printf("Result\n");
	PrintArray(input, freq, n);
	return 0;
}