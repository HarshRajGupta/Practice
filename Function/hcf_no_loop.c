#include <stdio.h>

int hcf(int n1, int n2)
{
	static int n=2;
	if(n1==n2)
	{
		return n1;
	}
	else
	{
		if(n<n1 && n<n2)
		{
			if(n1%n==0 && n2%n==0)
			{
				int h=n;
				n=2;
				return (h*hcf(n1/h, n2/h));
			}
			else
			{
				n=n+1;
				return(hcf(n1,n2));
			}
		}
		else
		{
			if(n==n1 || n==n2)
			{
				if(n1%n==0 && n2%n==0)
					return n;
				else
					return 1;
			}
			else
				return 1;
		}
	}
}

int main()
{
	printf("Enter two numbers\n");
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Hcf = %d",hcf(a,b));
	return 0;
}