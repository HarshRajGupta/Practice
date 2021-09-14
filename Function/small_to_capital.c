//Conversion of small to capital

#include <stdio.h>
#include <string.h>

char* capital(int l, char s[10])//l=lenght of string
{
	static int lim=0; 
	static char c[10];
	int n;
	if (lim==l)
    {
	    return 0;
	}
	else
	{
		n=s[lim];
		n=n-32;
		if(n>64 && n<91)
		{
			c[lim]=n;
			lim=lim+1;
	    	capital(l,s);
		    return (c);
	    }
	    else
	    	return 0;
	}
}

int main()
{
	char s[10];
	gets(s);
	int l;
	l=strlen(s);
    strcpy(s, capital(l,s));
	printf("%s",s);
	return 0;
}