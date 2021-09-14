#include <stdio.h>
#define MAX 100000

void ScanArray(int* Arr, int n)
{
	for (int i=0; i<n; ++i)
	{
		scanf("%d",Arr + i);
	}
}

void AddElementbylocation(int* Arr, int n)
{
	auto int c;
	printf("\nEnter the loction of extra element : ");
    scanf("%d",&c);

    c = (c>n)? n : c;

        for(int i=n; i>=c; i--)
        {
            *(Arr + i) = *(Arr + (i-1));
        }

    printf("\nEnter the element at place %d : ",c);
    scanf("%d",Arr + c);
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
	AddElementbylocation(a, n);
	printf("Reslutant Array\n");
	PrintArray(a, n+1);
	return 0;
}