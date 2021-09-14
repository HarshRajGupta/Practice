#include <stdio.h>
#define MAX 100000

void ScanArray(int* Arr, int n)
{
	for (int i=0; i<n; ++i)
	{
		scanf("%d",Arr + i);
	}
}

int frequency_unique(int* Arr, int* o, int n)
{
	int m=0;
	for(int i=0; i<n; ++i)
	{
		for (int j=0; j<n-m; ++j)
		{
			for (int k=j+1; k<n-m; ++k)
			{
				if (*(Arr + j) == *(Arr + k))
				{
					++m;

					*(o + j) = *(o + j) + 1;//Frequency

					for (int l=k; l<n-m; ++l)
					{
						*(Arr + l) = *(Arr + (l+1));
					}
				}
			}
		}

	}
	return m;
}


void PrintArray(int* Arr, int* freq, int n)
{
	printf("\n========================================\n");
	for (int i=0; i<n; ++i)
	{
		printf("%d comes %d times\n", *(Arr + i),++*(freq + i));
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
	int x;
	x = frequency_unique(input, freq, n);
	printf("Result\n");
	PrintArray(input, freq, n-x);
	return 0;
}