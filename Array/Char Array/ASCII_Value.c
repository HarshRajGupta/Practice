#include <stdio.h>
#include <string.h>
int main()
{
	//INPUT

	printf("Chracter : ");
	char c;
	c = getchar();

	//Main Code

	int n = c;

	//OUTPUT
	printf("\n========================================\n");
	printf("ASCII Value : %d", n);
	printf("\n========================================\n");
	return 0;
}