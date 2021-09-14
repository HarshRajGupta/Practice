/*      1                                                                         
      1 2 1                                                                       
    1 2 3 2 1                                                                     
  1 2 3 4 3 2 1                                                                   
1 2 3 4 5 4 3 2 1  */

#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("Number of Rows : ");
	int n = 0;
	scanf("%d", &n);
	printf("\n**************************************\n");
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 0; j < 2*(n-i); ++j)
		{
			printf(" ");
		}
		for (int j = 1; j <= i; ++j)
		{
			printf("%d ", j);
		}
		for (int j = i-1; j > 0; --j)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
	printf("**************************************\n");
	return 0;
}