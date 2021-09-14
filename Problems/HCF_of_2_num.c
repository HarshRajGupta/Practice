#include<stdio.h>
int main(void)
{
    int a,b,c,d;
    d=1;
    c=1;
    scanf("%d%d",&a,&b);
    while (c<=a && c<=b)
    {
        if ( a%c==0 && b%c==0)
           d=d*c;

        c=c+1;
    }
    printf("\n========================================\n");
    printf("hcf of two %d",d);
    printf("\n========================================\n");

    return 0;
}