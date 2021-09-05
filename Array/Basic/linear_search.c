#include <stdio.h>
#include <process.h>
#define max 1000
int main(void)
{
	int a[max],n,c;

	//INPUT

	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}

	//Number to Search for

	printf("Enter num. to search\n");
	scanf("%d",&c);

	//Main Code

	printf("\n========================================\n");
	for(int i=0; i<n; i++)
	{
		if(a[i]==c)
		{
			printf("Number Found at index %d",i);
			printf("\n========================================\n");
			exit (0);
		}
	}
	printf("Not Found");
	printf("\n========================================\n");
	return 0;
}