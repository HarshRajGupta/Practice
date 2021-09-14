/*              1
             2  3  2
           3 4  5  4  3
         4 5 6  7  6  5 4
       5 6 7 8  9  8  7 6 5
     6 7 8 9 10 11 10 9 8 7 6          */

#include<stdio.h>
void main()
{
    int a,b,c,d;
    a=1;
    while (a<7)
    {
        for(b=1;b<41-a;b++)
        {
            printf(" ");
        }

        for(c=a;c<a+a;c++)
        {
            printf("%d ",c);
        }

        for (d=c-2;d>=a;d=d-1)
        {
            printf("%d ",d);
        }

        printf("\n");

        a=a+1;
    }
}
