#include <stdio.h>
#define MAX 100000

void ScanArray(int* Arr, int n)
{
	for (int i=0; i<n; ++i)
	{
		scanf("%d",Arr + i);
	}
}

int max(int* Arr, int n)
{
	int max = *(Arr + 0);
	for (int i=1; i<n; ++i)
	{
		if(*(Arr + i) > max)
			max = *(Arr + i);
	}
	return max;
}

int main(void)
{
	printf("Array Size : ");
	int n;
	scanf("%d",&n);
	printf("Enter Elements\n");
	int a[MAX] = {0};
	ScanArray(a, n);
	int s;
	s=max(a, n);
	printf("\n========================================\n");
	printf("Largest Number is %d",s );
	printf("\n========================================\n");
	return 0;
}