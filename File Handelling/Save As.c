#include <stdio.h>

long int factorial(int n)
{
	return (n == 0) ? 1 :  n * factorial(n - 1);
}

int main(int argc, char const *argv[])
{
	printf("Number of Rows : ");
	int m;
	scanf("%d", &m);
	printf("\n***********************\n");
	for (int n = 0; n <= m; ++n)
	{
		for (int i = m; i > n; --i) printf("  ");
		for (int i = n, j = 0; i >= 0 && j <= n; --i, j++) 
			printf("%ld  ", factorial(n) / (factorial(i) * (factorial(j))));
		printf("\n");
	}
	printf("***********************");
	return 0;
}