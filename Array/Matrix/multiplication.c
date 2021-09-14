#include <stdio.h>
#define max 5
int main()
{
	long int a[max][max], b[max][max], o[max][max];

	int z, y, x, w, i, j, k;

	printf("1st Matrix Size : ");
	scanf("%d%d", &z, &y);

	printf("2nd Matrix Size : ");
	scanf("%d%d", &x, &w);

	if (x == y)
	{	
		printf("Enter Elements of 1st Matrix Row wise-\n");
		for (i = 0; i < z; ++i)
		{
			for (j = 0; j < y; ++j) scanf("%ld", &a[i][j] );
		}

		printf("Enter Elements of 2nd Matrix Row wise-\n");//2nd matrix
		for (i = 0; i < x; ++i) //Column of 2nd matrix
		{
			for (j = 0; j < w; ++j) scanf("%ld", &b[i][j] );
		}

		for (i = 0; i < z; i++) 
		{
			for (j = 0; j < w; j++)
			{
				long int temp = 0;
				for (k = 0; k < x; k++) temp += (a[i][k] * b[k][j]);
				o[i][j] = temp;
			}
		}

		/*Output*/
		printf("Resultant Matrix");
		printf("\n========================================\n");
		for (i = 0; i < z; ++i)
		{
			for (j = 0; j < w; ++j) printf("%ld ", o[i][j] );
			printf("\n");
		}
		printf("\n========================================\n");

	}
	else
		printf("Can't multiply");

	return 0;
}