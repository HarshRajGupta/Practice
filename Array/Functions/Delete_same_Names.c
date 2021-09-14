#include <stdio.h>
#include <string.h>
#define MAX 100

int OnlyUnique(int n, char str[15][MAX])
{
	int m = 0;
	for (int j = 0; j < n - m; ++j)
	{
		for (int k = j + 1; k < n - m; ++k)
		{
			if (strcmp(str[k], str[j]) == 0)
			{
				++m;
				for (int l = k; l < n - m; ++l)
				{
					strcpy(str[l], str[l + 1]);
				}
			}
		}
	}
	return m;
}

void PrintArray(int n, char str[15][MAX])
{
	printf("\n========================================\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%s\t", str[i]);
	}
	printf("\n========================================\n");
}

int main(int argc, char const *argv[])
{
	printf("No of Names : ");
	int n;
	scanf("%d", &n);
	printf("Enter Names\n");
	char str[15][MAX];
	for (int i = 0; i < n; ++i)
	{
		scanf("%s", str[i]);
	}
	int x;
	x = OnlyUnique(n, str);
	printf("\nReslutant List");
	PrintArray(n - x, str);
	return 0;
}