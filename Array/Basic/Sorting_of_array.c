#include<stdio.h>
int main(void)
{
    int i[1000], o[1000], b;

    //INPUT

    printf("Size of array : ");
    scanf("%d",&b);
    printf ("\nEnter the elements of array\n");
    for(int j=1; j<=b; j++)
    {
        scanf("%d",&i[j]);
    }

    //Main Code

    
    a[b+1]=100000;
    for (int j=0; j<=b; j++)
    {  
        o[j]=0;
    }

    for(int j=b; j>0; j--)
    {
        for(int n=1;n<=b;n++)
        {
            if (o[j]<i[n] && a[j+1]>i[n])
                o[j]=i[n];
        }
    }

    //OUTPUT
    printf("\n========================================\n");
    printf("\nSorted Array-\n");
    for(int j=1; j<=b; j++)
    {
        printf("%d ",o[j]);
    }
    printf("\n========================================\n");
    return 0;
}
