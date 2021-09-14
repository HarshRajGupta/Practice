/* *****************************1
   ****************************2

   40                              */

#include<stdio.h>
void main ()
{
    int a,b;
    for(b=39;b>=0;b--)
    {
        for(a=b;a>0;a--)
            printf("*");

             printf("%d\n",40-b);
    }

}
