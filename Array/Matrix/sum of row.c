#include <stdio.h>
#define max 10
int main()
{
	int a[max][max], c, d;
	int sum[max];
	for(int i=1; i<=c; i++)
		sum[i]=0;

	    /*INPUT*/
	
	printf("Matrix Size : ");
	scanf("%d%d",&c,&d);printf("Enter Elements of Matrix Row wise-\n");
	for(int i=1; i<=c; ++i)
	{
		for (int j=1; j<=d; ++j)
		    scanf("%d",&a[i][j] );
	}

	//Main Code

	for(int i=1; i<=c; ++i)
	{
		for (int j=1; j<=d; ++j)
			sum[i]=sum[i]+a[i][j];
	}

	//OUTPUT

	for(int i=1; i<=c; ++i)
    {
	printf("Sum of Row %d = %d\n",i,sum[i] );
    }

	return 0;
}