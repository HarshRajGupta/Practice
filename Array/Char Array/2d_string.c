#include <stdio.h>
#include <string.h>

int main()
{
	char a[10][10];
	printf("enter names\n");

	//INPUT

	for(int i=1;i<=10;i++)
	{
		gets(a[i]);
	}
	printf("\n");

	//OUTPUT
	printf("\n========================================\n");
	for (int i=1; i<=10; i++)
	{
		printf("%s\n",a[i] );
	}
	printf("\n========================================\n");
	return 0;
}