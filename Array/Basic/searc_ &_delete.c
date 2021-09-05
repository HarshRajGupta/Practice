#include<stdio.h>
#include<process.h>
int main()
{
    int a[1000], b, i, c;
    printf("No. of elements in array : ");
    scanf("%d", &b);
    for (i = 1; i <= b; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter the element which you want to delete : ");
    scanf("%d", &c);
    printf("\n========================================\n");
    for (i = 1; i <= b; i++)
    {
        if (a[i] == c)
        {
            for (int j = i; j <= b; j++)
            {
                a[j] = a[j + 1];
            }
            printf("\nNew array list\n");
            for (i = 1; i < b; i++)
            {
                printf("%d ", a[i]);
            }
            printf("\n========================================\n");
            exit (0);
        }
    }

    //NOT FOUND

    printf("\nNOT FOUND\n");
    printf("\n========================================\n");
    return 0;
}
