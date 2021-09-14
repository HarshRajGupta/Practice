#include <stdio.h>
#define max 10
int main()
{
	int a[max][max], c, d;
	printf("Matrix Size : ");
	scanf("%d%d",&c,&d);

	    /*INPUT*/

	printf("Enter Elements of Matrix Row wise-\n");
	for(int i=1; i<=c; ++i)
	{
		for (int j=1; j<=d; ++j)
		    scanf("%d",&a[i][j] );
	}

        /*OUTPUT*/

    printf("\nTranspose of given Matrix\n \n");
	for(int i=1; i<=d; ++i)
	{
		for (int j=1; j<=c; ++j)
		   {
		       printf("%d ",a[j][i] );
		   }
        printf("\n");
	}
	return 0;
}