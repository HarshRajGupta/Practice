#include<stdio.h>
int main(void)
{
    int a[1000], b, i;
    int c = 0;

    //INPUT

    printf("Enter number of elements in array : ");
    scanf("%d", &b);
    for (i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }

    //Main Code

    for (i = 0; i < b; i++)
    {
        if (c < a[i])
        {
            c = a[i];
        }
    }

    //OUTPUT

    printf("\n========================================\n");
    printf("%d is biggest", c);
    printf("\n========================================\n");

    return 0;
}