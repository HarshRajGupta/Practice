#include<stdio.h>
int main(void)
{
    int a[1000], b, c, i;

    //INPUT

    printf("Array Size : ");
    scanf("%d", &b);
    printf("\nEnter the elements of the array-\n");
    for (i = 1; i <= b; i++)
    {
        scanf("%d", &a[i]);
    }

    //DELETION

    printf("\nWhich position you want to delete : ");
    scanf("%d", &c);

    //Main Code

    for (i = 1; i <= b; i++)
    {
        if (i >= c + 1)
        {
            a[i - 1] = a[i];
        }
        else
            break;
    }

    //OUTPUT
    printf("\n========================================\n");
    printf("\nFinal Array\n");
    for (i = 1; i < b; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n========================================\n");
    return 0;
}
