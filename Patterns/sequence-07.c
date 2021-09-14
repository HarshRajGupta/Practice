/* 54321
   4321
   321
   21
   1     */

#include<stdio.h>
void main ()
{
    int a,b;
    for(b=5;b>0;b--)
    {
        for(a=b;a>0;a--)
            printf("%d",a);

             printf("\n");
    }
}
