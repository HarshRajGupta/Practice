#include<stdio.h>
int main(void)
{
    int a,b,d;
    b=1;
    d=0;

    //INPUT

    printf("How many terms of the series do you want?\n");
    scanf("%d",&a);

    //Main Code
    printf("\n========================================\n");
    printf("0 ");
    for (int i=1;i<=a-1;i++)
    {
        d=b+d;
        printf("%d ",d);
        b=d-b;
    }
    printf("\n========================================\n");

    return 0;
}