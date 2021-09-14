#include<stdio.h>
char o1[10] = "Prime";
char o2[10] = "Not Prime";

char* prime(int n, int z)
{
	if (z<n)
	{
		if(n%z==0)
	    {
		   return (o2);
	    }
	    else
		    return (prime(n, z+1));
    }
    else
    {
    	return (o1);
    }
}
int main(void)
{
	printf("Enter number\n");
	int n;
	scanf("%d",&n);
	printf("%s",prime(n, 2));
}