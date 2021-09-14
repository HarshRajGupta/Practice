#include<stdio.h>
int main()
{
    int a,s;
    printf("Enter how many natural numbers you want?\n");
    scanf("%d",&a);
    s=1;

    printf("\n========================================\n");
    while (s<=a)
       {
           printf("%d ",s);
           s=s+1;
       }
    printf("\n========================================\n");
    return 0;
}
