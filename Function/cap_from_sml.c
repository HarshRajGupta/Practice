#include <stdio.h>
#include <string.h>

char* capital(char s[10], int l)
{
	static char o[10];
	if(l<0)
		return 0;
	else
	{
		int n;
		n=s[l];
		n=n-32;
		if (n>64 && n<91)
		   o[l]=n;
		capital(s,l-1);
		return (o);
	}
}

int main(void)
{
	char s[10];
	gets(s);
	int l;
	l=strlen(s);
	strcpy(s, capital(s, l));
	printf("%s",s );
	return 0;
}