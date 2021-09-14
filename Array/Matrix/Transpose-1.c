#include <stdio.h>
#define max 10
int main()
{
	int a[max][max], b[max][max], c, d;

/*      Input Matrix  = a[c][d]
        Output Matrix = b[d][c]
        b[d][c]=transpose of a[c][d]        */

	printf("Matrix Size : ");
	scanf("%d%d",&c,&d);

	    /*INPUT*/

	printf("Enter Elements of Matrix Row wise-\n");
	for(int i=1; i<=c; ++i)
	{
		for (int j=1; j<=d; ++j)
		    scanf("%d",&a[i][j] );
	}

	    /*Main Code*/

	for(int i=1; i<=c; ++i)
	{
		for (int j=1; j<=d; ++j)
		    b[j][i]=a[i][j];
	}

	    /*OUTPUT*/

    printf("\nTranspose of given Matrix\n \n");
	for(int i=1; i<=c; ++i)
	{
		for (int j=1; j<=d; ++j)
		   {
		        printf("%d ",b[i][j] );
		   }
        printf("\n");
	}
	return 0;
}