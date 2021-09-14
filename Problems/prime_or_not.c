#include<stdio.h>
#include<process.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    printf("\n========================================\n");
    for (b=2;b<=a/2;b++)
    {
        if (a%b==0)
       {
            printf("%d is not prime",a);
            printf("\n========================================\n");
            exit (0);

       }
    }
    printf("%d is prime",a);
    printf("\n========================================\n");
    return 0;
}
