#include <stdio.h>
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
	printf("\n========================================\n");
	for (int i=0; i<n; ++i)
	{
		printf("%d ", *(Arr + i));
	}
	printf("\n========================================\n");
}

int* copy_array(int* Arr, int n)
{
	int* Arr2;
	Arr2 = (int*)calloc(n,sizeof(int));
	for (int i=0; i<n; ++i)
	{
		*(Arr2 + i) = *(Arr + i);
	}
	return Arr2;
}

int main(void)
{
	printf("Array Size : ");
	int n;
	scanf("%d",&n);
	printf("Enter Elements of the Array\n");
	int a[MAX]={0};
	ScanArray(a, n);
	int* output;
	output = copy_array(a, n);
	printf("Reslutant Array\n");
	PrintArray(output, n);
	free(output);
	return 0;
}
