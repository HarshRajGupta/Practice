/*                    1
                     121
                    12321
                   1234321
                  123454321                */

#include<stdio.h>
void main()
{
    int a,b,c,d;
    a=1;
    while (a<6)
    {
        for(b=1;b<41-a;b++)
        {
            printf(" ");
        }

        for(c=1;c<=a;c++)
        {
            printf("%d",c);
        }

        for (d=a-1;d>0;d=d-1)
        {
            printf("%d",d);
        }

        printf("\n");

        a=a+1;
    }
}
