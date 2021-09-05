#include<stdio.h>
int main()
{
    int a[1000], b, i, c;

    //INPUT

    printf("No. of elements in array : ");
    scanf("%d",&b);
    for(i=1; i<=b; i++)
    {
        scanf("%d",&a[i]);
    }

    //Main Code

    a[b+1]=a[1];
    for(i=1;i<=b;i++)
    {
        a[i]=a[i+1];
    }

    //OUTPUT
    printf("\n========================================\n");
    for(i=1; i<=b; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n========================================\n");
    return 0;
}
