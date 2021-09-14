#include <stdio.h>
#define max 10
int main()
{
	int a[max][max], b, c, d;
	printf("Matrix Size : ");
	scanf("%d%d",&c,&d);

	    /*INPUT*/

	printf("Enter Elements of Matrix Row wise-\n");
	for(int i=1; i<=c; ++i)
	{
		for (int j=1; j<=d; ++j)
		    scanf("%d",&a[i][j] );
	}

	//Main Code
	
	for(int i=1; i<=d; ++i)
	{
		b=a[1][i];
		a[1][i]=a[c][i];
		a[c][i]=b;
	}

        /*OUTPUT*/
    printf("\n========================================\n");
	printf("Result\n");
	for(int i=1; i<=c; ++i)
	{
		for (int j=1; j<=d; ++j)
		   {
		        printf("%d ",a[i][j] );
		   }
        printf("\n");
	}
	printf("\n========================================\n");
	return 0;
}