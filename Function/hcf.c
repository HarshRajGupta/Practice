#include <stdio.h>
int hcf(int n1, int n2)
{
	if(n1==n2)
	    return n1;

	else
	{
		for(int i=2; i<n1 && i<n2; i++)
		{
			if(n1%i==0 && n2%i==0)
			{
				return(i*hcf((n1/i), (n2/i) ) );
			}
		}
		return 1;
		
	}
}


int lcm(int n1, int n2) 
{
	return(n1*n2/hcf(n1,n2));
}

int main()
{
	printf("Numbers : "); 
	int a,b;
	scanf("%d%d",&a,&b);
	printf("hcf = %d",hcf(a,b));
	printf("\nlcm = %d",lcm(a,b) );
	return 0;
}