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
    int n = 0;
    printf("Number of Rows : ");
    scanf("%d", &n);
    n =  n/2 +1;
    for (int a = 1; a <= n; ++a)
    {
        for (int i = 1; i <= n - a; i++) printf(" ");

        for (int i = 1; i <= ((2 * a) - 1); i++) printf("*");

        printf("\n");
    }
    for (int a = n - 1; a > 0; --a)
    {
        for (int i = 1; i <= n - a; i++) printf(" ");

        for (int i = 1; i <= ((2 * a) - 1); i++) printf("*");

        printf("\n");
    }
    return 0;
}