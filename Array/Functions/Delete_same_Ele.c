#include <stdio.h>
#define MAX 100000

void ScanArray(int* Arr, int n)
{
	for (int i=0; i<n; ++i)
	{
		scanf("%d",Arr + i);
	}
}

int OnlyUnique(int* Arr, int n)
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
	int a[MAX] = {0};
	ScanArray(a, n);
	int x;
	x=OnlyUnique(a, n);
	printf("Reslutant Array\n");
	PrintArray(a, n-x);
	return 0;
}