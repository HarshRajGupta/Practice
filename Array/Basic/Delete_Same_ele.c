#include <stdio.h>
#define max 10000
int main()
{
    int a[max];
    int s;
    int n=0;

    //INPUT//
    
    printf("Array Size : ");
    scanf("%d",&s);
    printf("\nEnter the elements of the array-\n");
    for(int i=1;i<=s;i++)
    {
       scanf("%d",&a[i]);
    }

    //Main Code//

    for (int z=1;z<=s;z++)
    {
    for (int i=1;i<=s-n;i++)
    {
        for (int j=i+1;j<=s-n;j++)
        {
            if(a[i]==a[j])
            {
                n=n+1;
                for(int k=j;k<=s-n;k++)
                {
                    a[k]=a[k+1];
                }
            }
        }
    }
    }
    
    //OUTPUT//

    printf("\n========================================\n");
    for (int i=1;i<=s-n;i++)
    {
        printf("%d-%d ",a[i],i );
    }
    printf("\n========================================\n");
    return 0;
}