#include <stdio.h>
#define max 15
int main()
{
	printf("Matrix Size : ");
	int a[max][max], b[max][max], o[max][max], c, d;
	scanf("%d%d", &c, &d);

	printf("Enter Elements of 1st Matrix Row wise-\n");
	for (int i = 1; i <= c; ++i)
	{
		for (int j = 1; j <= d; ++j) scanf("%d", &a[i][j] );
	}
	printf("Enter Elements of 2nd Matrix Row wise-\n");
	for (int i = 1; i <= c; ++i)
	{
		for (int j = 1; j <= d; ++j)
		{
			scanf("%d", &b[i][j] );
			o[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("\n======================\n");
	for (int i = 1; i <= c; ++i)
	{
		for (int j = 1; j <= d; ++j) printf("%d\t", o[i][j] );
		printf("\n");
	}
	printf("\n======================\n");
	return 0;
}