#include <stdio.h>
#define max 10
int main()
{
	int a[max][max], c, d;
	int sum=0;
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

	for(int i=1; i<=c; ++i)
	{
		for (int j=1; j<=d; ++j)
		{    
		    sum=sum+a[i][j];
		}
	}

	//OUTPUT

	printf("SUM of all ")