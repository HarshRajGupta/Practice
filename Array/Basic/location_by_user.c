//USER will give both WHAT and WHERE to store

#include <stdio.h>
int main(void)
{
    int a[100], b, i, c;
    for(c=0; c<=100;c++)
    {
        a[c]=-1000;
    }

    //INPUT

    printf("No. of elements in array : ");
    scanf("%d",&b);

    for(c=0; c<b; c++)
    {
        printf("\nEnter the location at which you want to save : ");
        scanf("%d",&i);

        printf("Enter the element at place %d : ",i);
        scanf("%d",&a[i]);

        printf("\n");
    }
    
    //OUTPUT

    printf("\n========================================\n");

    for (c=0; c<100; ++c)
    {
        if(a[c]!=-1000)
        {
            printf("%d - %d\n",c,a[c]);
        }
    }

    printf("\n========================================\n");
    
    return 0;
}
