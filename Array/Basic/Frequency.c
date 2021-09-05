#include <stdio.h>
#define max 10000
int main()
{
	int a[max],b[max];
	int i,s;
	int n=0;

	//INPUT//
	
	printf("Array Size : ");
    scanf("%d",&s);
    printf("\nEnter the elements of the array-\n");
    for(i=1;i<=s;i++)
    {
       scanf("%d",&a[i]);
    }

    //Main Code//

    for (i=1;i<=s;i++)
   	b[i]=0;

    for (i=1;i<=s;i++)
    {
    	int c=1;

    	for (int j=1;j<=s;j++)
    	{
    		if (a[i]==a[j] && i!=j)
    		{
    			c=c+1;
    		}

    		b[i]=c;
    	}
    }

    //Deleting Same Elements//

    for (int z=1;z<=s;z++)
    {
    for (i=1;i<=s-n;i++)
    {
    	for (int j=i+1;j<=s-n;j++)
    	{
    		if(a[i]==a[j])
    		{
                n=n+1;
                for(int k=j;k<=s-n;k++)
                {
                    a[k]=a[k+1];
                    b[k]=b[k+1];
                }
    		}
    	}
    }
    }

    //OUTPUT//

    printf("\n========================================\n");
    for (i=1;i<=(s-n);i++)
    {
    	printf("%d comes %d times\n",a[i],b[i] );
    }
    printf("\n========================================\n");
    
    return 0;
}