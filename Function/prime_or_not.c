#include <stdio.h>
#include <string.h>
char* prime(int n, int z)
{
	static char s[10];
	if (z<n)
	{
		if(n%z==0)
	    {
		   char a[10] = "Not Prime";
		   strcpy(s,a);
		   return (s);
	    }
	    else
		    return (prime(n, z+1));
    }
    else
    {
    	char a[10] = "Prime";
    	strcpy("s,a");
    	return (s);
    }
}

int main(void)
{
	printf("Enter number\n");
	int n;
	scanf("%d",&n);
	printf("%s\n",prime(n, 2));
	return 0;
}