#include<stdio.h>
#include<string.h>
int main()
{
	char a[100], c;
	gets(a);
	int l,n;
	l=strlen(a);
	for(int i=0; i<l; i++)
	{
	    n=a[i];
	    n=n-32;
	    a[i]=n;
	}
	printf("\n========================================\n");
	printf("%s",a);
	printf("\n========================================\n");
	
	return 0;
}