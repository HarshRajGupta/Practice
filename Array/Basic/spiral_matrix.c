#include<stdio.h>
int main(void)
{
	printf("Enter order : ");
	int n;
	scanf("%d", &n);
	int a[100][100] = {0};
	int b = 0;
	int c=0;
    int z=0;
	for (z=0; z<n/2 + 1; ++z)
	{
		for (int i=z; i<n-z && i>=0; ++i)
		{
			++c;
			if (a[z][i] == 0)
			    a[z][i] = ++b;
		}
		for (int j=z+1; j<n-z-1 && j>=0; ++j)
		{
			++c;
			if (a[j][n-z-1] == 0)
			    a[j][n-z-1]= ++b;
		}
		for (int k=n-z-1; k>=z && k>=0; --k)
		{
			++c;
			if (a[n-z-1][k] == 0)
			    a[n-z-1][k]= ++b;
		}
		for (int l=n-z-2; l>z && l>=0; --l)
		{
			++c;
			if (a[l][z] == 0)
			    a[l][z]=++b;
		}
	}

	for (int i=0; i<n; ++i)
	{
		for (int j=0; j<n; ++j)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("%d ",c );

	return 0;
}