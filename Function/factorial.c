#include <stdio.h>
int fac(int);
int main()
{
	printf("Number : ");
	int a;
	scanf("%d",&a);
	printf("Result = %d",fac(a));
	return 0;
}
int fac(int n)
{
	if(n==1)
		return 1;
	else
		return(n*fac(n-1));
}