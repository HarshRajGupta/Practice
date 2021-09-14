#include <stdio.h>
int main()
{
	int a[100];
	
	for (int i=0; i<100 && i>0;)
	{
		printf("Number\n");
		scanf("%d",&a[i]);
		scanf("%d",&i);
	}
    return 0;
}