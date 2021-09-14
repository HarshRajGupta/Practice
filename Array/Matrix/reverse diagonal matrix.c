#include <stdio.h>
#define max 10
int main()
{
	int a[max][max], c;
	int s, b;
	printf("Matrix Size : ");
	scanf("%d",&c);

	    /*INPUT*/

	printf("Enter Elements of Matrix Row wise-\n");
	for(int i=0; i<c; ++i)
	{
		for (int j=0; j<c; ++j)
		    scanf("%d",&a[i][j] );
	}

	//Main Code

	for(int i=0; i<c/2; ++i)
	{
		s=a[i][i];
		a[i][i]=a[c-i-1][c-i-1];
		a[c-i-1][c-i-1]=s;

		b=a[i][c-i-1];
		a[i][c-i-1]=a[c-i-1][i];
		a[c-i-1][i]=b;
	}

	    /*OUTPUT*/

    printf("\nReverse Diagonal Matrix\n \n");
	for(int i=0; i<c; ++i)
	{
		for (int j=0; j<c; ++j)
		   {
		        printf("%d ",a[i][j] );
		   }
        printf("\n");
	}
	return 0;
}