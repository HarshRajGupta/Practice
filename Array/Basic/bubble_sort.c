#include <stdio.h>
int main()
{
	int b, a[1000], c;

	//INPUT

	printf("Array Size : ");
	scanf("%d", &b);
	printf("Enter elements of Array\n");

	for (int i = 0; i < b; ++i)
	{
		scanf("%d", &a[i]);
	}

	//Main Code

	for (int i = 0; i < b; ++i)
	{
		for (int j = 0; j < b - 1; ++j)
		{
			if (a[j] > a[j + 1])
			{
				c = a[j];
				a[j] = a[j + 1];
				a[j + 1] = c;
			}
		}
	}

	//OUTPUT

	printf("Sorted Array\n");
	printf("\n========================================\n");

	for (int i = 1; i <= b; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n========================================\n");
	return 0;
}