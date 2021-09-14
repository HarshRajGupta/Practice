#include<stdio.h>
int main()
{

    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("Input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("Output.txt", "w", stdout);
    #endif
    int a;
    printf("enter no : ");
    scanf("%d",&a);
    printf("square is %d\n",a*a );

    return 0;
}