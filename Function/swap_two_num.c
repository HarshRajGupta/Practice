#include <stdio.h>
int wap(int n1, int n2)
{
    int a, b;
    a=n2;
    b=n1;
    printf("1st number = %d\n2nd number = %d",a,b );
    return 0;
}

int main()
{
    int l,b;
    scanf("%d%d",&l,&b);
    wap(l,b);
    return 0;
}