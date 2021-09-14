#include <stdio.h>
int e(int a, int b)
{
	if(b==0)
		return 1;
	else
		return(a*e(a,b-1));
}
int main()
{
	printf("enter base and exponent\n");
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Result = %d\n",e(a,b) );
	return 0;
}
