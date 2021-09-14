/*     1
       2 3
       4 5 6
       7 8 9 0
       1 2 3 4 5    */

#include<stdio.h>
void main ()
{
    int a,b,c;
    a=0;
     for(b=1;b<6;b++)
    {
        for(c=1;c<=b;c++)
        {
            a=a+1;
            printf("%d ",a);

            if (a>8)
            {
                a=-1;
            }
        }
        printf("\n");
    }
}
