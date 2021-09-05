#include<stdio.h>
#define max 10000
int main(void)
{
    int a[max], b, i, c;

    //INPUT

    printf("No. of elements in array : ");
    scanf("%d", &b);
    printf("\nEnter elements in increasing order\n");
    for (i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }

    //Enter the EXTRA ELEMENT

    printf("\nEnter the extra element : ");
    scanf("%d", &c);

    //Main Code

    if (c > a[b - 1])
    {
        a[b] = c;
    }
    else
    {   for (i = b - 1; i >= 0; i--)
        {
            if (a[i] > c && a[i - 1] < c)
            {
                a[i] = c;
            }
            else if (a[i] > c)
            {
                a[i + 1] = a[i];
            }
        }
    }

    //OUTPUT

    printf("\n========================================\n");

    for (i = 1; i <= (b + 1); i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n========================================\n");

    return 0;
}