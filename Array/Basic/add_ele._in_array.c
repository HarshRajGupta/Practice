#include<stdio.h>
#define max 10000
int main(void)
{
    int a[max], b, i, c;

    //INPUT

    printf("No. of elements in array : ");
    scanf("%d", &b);

    printf("\nEnter elements of the array\n");
    for (i = 1; i <= b; i++)
    {
        scanf("%d", &a[i]);
    }

    //Addition of EXTRA ElemenT

    printf("\nEnter the loction of extra element : ");
    scanf("%d", &c);

    for (i = (b + 1); i > c; i--)
    {
        a[i] = a[i - 1];
    }

    printf("\nEnter the element at place %d : ", c);
    scanf("%d", &a[c]);

    //OUTPUT

    printf("Reslutant Array\n");

    printf("\n========================================\n");
    for (i = 1; i < (b + 1); i++)
    {
        printf("%d ", a[i]);
    }
    if (c > b)
    {
        printf("%d", a[c]);
    }
    else if (c <= b)
    {
        printf("%d", a[b + 1]);
    }
    printf("\n========================================\n");

    return 0;
}
