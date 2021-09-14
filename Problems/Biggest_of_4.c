#include<stdio.h>
int main(void)
{
    int a, b, c, d;

    //INPUT

    printf("Enter four numbers\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    //If a number is greater than the remaining four, then it must be the greatest one
    printf("\n========================================\n");
    if (a > b && a > c && a > d)
    {
        printf("the biggest of four is = %d", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("the biggest of four is = %d", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("the biggest of four is = %d", c);
    }
    else if (d > a && d > b && d > c)
    {
        printf("the biggest of four is = %d", d);
    }
    printf("\n========================================\n");

    return 0;

}