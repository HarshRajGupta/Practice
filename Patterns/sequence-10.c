/*                    1
                     101
                    10101
                   1010101
                  101010101                */

#include<stdio.h>
void main()
{
    int a,b,c,d,e;
    a=1;
    printf("No. of rows : ");
    scanf("%d",&e);
    while (a<e+1)
    {
        for(b=1;b<41-a;b++)
        {
            printf(" ");
        }

        for(c=1;c<=a;c++)
        {
            printf("%d",c%2);
        }

        for (d=a-1;d>0;d=d-1)
        {
            printf("%d",d%2);
        }

        printf("\n");

        a=a+1;
    }
}
