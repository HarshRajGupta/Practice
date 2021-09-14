#include <stdio.h>
int hcf(int n1, int n2, int n)
{
	if(n1==n2)
		return n1;
	else
	{
		if(n<n1 && n<n2)
		{
			if(n1%n==0 && n2%n==0)
				return (n*hcf(n1/n, n2/n, 2));
			else
				return (hcf(n1 ,n2, n+1));
		}
		else
		{
			if(n1%n==0 && n2%n==0)
				return n;
			else
				return 1;
		}
	}
}
int main ()
{
	printf("Enter two number\n");
	int a, b;
	scanf("%d%d",&a,&b);
	printf("HCF = %d",hcf(a, b, 2));
	return 0;
}