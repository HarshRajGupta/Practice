#include<stdio.h>
int main ()
{
    int a,c,d;
    c=0;
    d=1;

    //INPUT
    printf("How many terms of the series do you want?\n");
    scanf("%d",&a);
    
    //Main Code
    printf("\n========================================\n");
    for(int i=1; i<=a;i++)
    {
        printf("%d ",c);
        c=c+d;
        d=c-d;
    }
    printf("\n========================================\n");
    return 0;
}