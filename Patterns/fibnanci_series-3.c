#include <stdio.h>

void fibnanci(int a, int b, int n)
{
	if (n > 0)
	{
		printf("%d\t", a);
		fibnanci(b, a + b, n-1);
	}
}

int main(int argc, char const *argv[])
{
	printf("No. of rows : ");
	int n = 0;
	scanf("%d", &n);
	fibnanci(0,1,n);
	return 0;
}