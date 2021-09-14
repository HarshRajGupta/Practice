#include <stdio.h>
int sum(int n)
{
	int s=n;
	if(s==0)
		return 0;
	else
		return (s+sum(s-1));
}
int main ()
{
	printf("Enter last Number\n");
	int n;
	scanf("%d",&n);
	printf("Result = %d\n",sum(n) );
	return 0;
}