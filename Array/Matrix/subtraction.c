#include <stdio.h>
#define max 15
int main()
{
	int a[max][max], b[max][max], o[max][max], c, d;

    /*  a[max][max]=1st matrix
	    b[max][max]=2nd matrix
	    o[max][max]=a[][]-b[][]
	    o[max][max]=Result      */

	printf("Matrix Size : ");
	scanf("%d%d",&c,&d);

    /*  INPUT  */

	printf("Enter Elements of 1st Matrix Row wise-\n");
	for(int i=1; i<=c; ++i)
	{
		for (int j=1; j<=d; ++j)
		    scanf("%d",&a[i][j] );
	}
	printf("Enter Elements of 2nd Matrix Row wise-\n");
	for(int i=1; i<=c; ++i)
	{
		for (int j=1; j<=d; ++j)
		    scanf("%d",&b[i][j] );
	}

	/*  Main Code */

	for(int i=1; i<=c; ++i)
	{
		for (int j=1; j<=d; ++j)
		   o[i][j]=a[i][j]-b[i][j];
	}

    /*  OUTPUT  */

    printf("Resultant Matrix\n");
	for(int i=1; i<=c; ++i)
	{
		for (int j=1; j<=d; ++j)
		   {
		        printf("%d ",o[i][j] );
		   }
        printf("\n");
	}
	return 0;
}