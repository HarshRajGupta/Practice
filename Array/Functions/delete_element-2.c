#include <stdio.h>
#define MAX 100000

void ScanArray(int* Arr, int n)
{
	for (int i=0; i<n; ++i)
	{
		scanf("%d",Arr + i);
	}
}

int binary(int* Arr, int n, int s)
{
	int mid;
	mid=n/2;

	if (*(Arr + mid) == s)
	{
		return (mid+1);
	}
	else
	{
		if (s > *(Arr + mid))
		{
			for (int i=mid+1; i<n; ++i)
			{
				if(*(Arr + i) == s)
				{
					return (i+1);
				}
			}
		}
		else
		{
			for (int i=0; i<mid; ++i)
			{
				if(*(Arr + i) == s)
				{
					return (i+1);
				}
			}
		}
	}
	return 0;
}

int deleteElement(int* Arr, int n, int d)
{
	int pos;
	pos = binary(Arr, n, d) - 1;
	if (pos >=0 )
	{
		for(int i=pos; i<n-1; i++)
		{
			*(Arr + i) = *(Arr + (i+1));
		}
		return 1;
	}
	else
	{
		printf("\n========================================\n");
		printf("Number not found\n");
		printf("\n========================================\n");
	    return 0;
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
	printf("Number to DELETE : ");
	int search;
	scanf("%d", &search);
	n = n - deleteElement(input, n, search);
	printf("\nResultant Array\n");
	PrintArray(input, n);
	return 0;
}