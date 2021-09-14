#include <stdio.h>
#define max 10
int main()
{
	int a[max][max], c;
	int sum=0;
	printf("Matrix Size : ");
	scanf("%d",&c);

	    /*INPUT*/

	printf("Enter Elements of Matrix Row wise-\n");
	for(int i=1; i<=c; ++i)
	{
		for (int j=1; j<=c; ++j)
		    scanf("%d",&a[i][j] );
	}

	//Main Code

	for(int i=1; i<=c; ++i)
	{
		sum=sum+a[i][i];
	}

	printf("Sum of diagonal Elements = %d", sum );

	return 0;
}