/* 1
   2  3
   4  5  6
   7  8  9  10
   11 12 13 14 15 */


#include<stdio.h>
int main ()
{
    int a,b,c;
    a=0;
    for(b=1;b<6;b++)
    {
        for(c=1;c<=b;c++)
        {
            a=a+1;
            printf("%d ",a);
        }
        printf("\n");
    }
    return 0;
}
