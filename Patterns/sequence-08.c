/*  No of rows - input from user

example - 4
                                *
                               ***
                              *****
                             *******
*/
#include<stdio.h>

int main(void)
{
    int c, n;
    printf("No. of Rows : ");
    scanf("%d", &n);
    for (int a = 1; a <= n; ++a)
    {
        //for (b = 1; b <= n - a; b++) printf(" ");

        for (c = 0; c < a; c++) printf("*\t");

       // for (d = a - 1; d > 0; d = d - 1) printf("*");

        printf("\n");
    }
    return 0;
}