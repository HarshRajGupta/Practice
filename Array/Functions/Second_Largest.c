#include <stdio.h>
#define MAX 100000

void ScanArray(int* Arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", Arr + i);
	}
}

int Second_max (const int Arr[], int n)
{
	int max_1 = 0, max_2 = 0;
	for (int i = 0; i < n; ++i)
	{
		if (Arr[i] > max_1)
		{
			max_2 = max_1;
			max_1 = Arr[i];
		}
		else if (Arr[i] > max_2 && Arr[i] < max_1)
		{
			max_2 = Arr[i];
		}
	}
	return max_2;
}

int main(void)
{	
	printf("Array Size : ");
	int n;
	scanf("%d",&n);
	printf("Enter Elements\n");
	int a[MAX] = {0};
	ScanArray(a, n);
	printf("Second Largest Number = %d", Second_max(a, n));
	return 0;
}