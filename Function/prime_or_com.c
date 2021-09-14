#include <stdio.h>
#include <string.h>
char output[45];
char* prime(int n, int z)
{
	if (z<n)
	{
		if(n%z==0)
	    {
	    	// fflush(stdin);
		    strcpy(output, "Composite number");
		    return output;
	    }
	    else
		    (prime(n, z+1));
    }
    else
    {
    	// fflush(stdin);
		strcpy(output, "prime number");
		return output;
    }
}
int main(void)
{
	printf("Enter the number\n");
	int n;
	scanf("%d",&n);
	char check[45];
	strcpy(check, prime(n,2));
	printf("%d is a %s",n, check);
	return 0;
}