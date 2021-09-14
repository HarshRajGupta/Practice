//Conversion of small to capital

#include <stdio.h>
#include <string.h>
char output[10];

void capital(int l, char s[10])//l=lenght of string
{
	if (l<0)
    {
	    return;
	}
	else
	{
		int n;
		n = s[l];
		n = n-32;
		if(n>64 && n<91)
		{
			output[l] = n;
	    	capital(l-1, s);
		    return;
	    }
	    else
	    	return;
	}
}

int main()
{
	char s[10];
	gets(s);
	int l;
	l=strlen(s);
	capital(l, s);
    strcpy(s, output);
	printf("%s",s);
	return 0;
}