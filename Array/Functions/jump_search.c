#include <stdio.h>
#include <math.h>
#include <stdlib.h>
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
	for (int i=0; i<n; ++i)
	{
		printf("%d ", *(Arr + i));
	}
}

int jump(int* Arr, int n, int search)
{
	int i=0;
	while ((int)(i + sqrt(n))<n && *(Arr + (int)(i + sqrt(n))) < search)
	{
		i+=sqrt(n);
	}
	while (i<n)
	{
		if (*(Arr + i) == search)
		{
			return (i+1);
		}
		++i;
	}
	return 0;//0 means element not found

}

int main(void)
{
	printf("Array Size : ");
	int n;
	scanf("%d",&n);
	printf("Enter Elements of the Array\n");
	int input[MAX]={0};
	ScanArray(input, n);

	printf("Number to Search for : ");
	int search;
	scanf("%d", &search);
	int pos;
	pos = jump(input, n, search);
	printf("\n========================================\n");
	if(pos != 0)
		printf("%d is located at Position %d\n", search, pos);
	else
		printf("Number not found\n");
	printf("\n========================================\n");
	return 0;
}