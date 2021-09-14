#include <stdio.h>
#define MAX 100000

void ScanArray(int* Arr, int n)
{
	for (int i=0; i<n; ++i)
	{
		scanf("%d",Arr + i);
	}
}

void AddElementinsort(int* Arr, int n)
{
	auto int c;
	scanf("%d",&c);
	for (int i=n-1; i>=-1; i--)
	{
		if(*(Arr + i) <= c)
		{
			*(Arr + (i+1)) = c;
			break;
		}
		else
		{
			*(Arr + (i+1)) = *(Arr + i);
		}
	}
}

void PrintArray(int* Arr, int n)
{
	for (int i=0; i<n; ++i)
	{
		printf("%d ", *(Arr + i));
	}
}

int main(void)
{
	printf("Array Size : ");
	int n;
	scanf("%d",&n);
	printf("Enter Elements of the Array\n");
	int a[MAX]={0};
	ScanArray(a, n);
	printf("Extra Element : ");
	AddElementinsort(a, n);
	printf("Reslutant Array\n");
	PrintArray(a, n+1);
	return 0;
}