#include <stdio.h>
int main()
{
	int a,b[10000];
	int c=0;

	//INPUT

	scanf("%d",&a);
	for(int j=1;j<=a;j++)
	{
	   scanf("%d",&b[j]);
	   c= c + b[i];//SUM
	}

	//OUTPUT
	printf("\n========================================\n");
	printf("%d\n",c);
	printf("\n========================================\n");
	return 0;
}