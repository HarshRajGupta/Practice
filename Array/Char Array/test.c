#include <stdio.h>
#include <string.h>
int main(void)
{
	char name[] = "Harsh";
	fflush(stdin);
	strcpy(name, "raj");
	printf("%s",name );
	return 0;
}