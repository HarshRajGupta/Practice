#include <stdio.h>
#include <string.h>

void Morse(char s[15])
{
	
	//MORSE CODE

	char m[26][5]={
		            ".-",
	                "-...",
	                "-.-.",
	                "-..",
	                ".",
	                "..-.",
	                "--.",
	                "....",
	                "..",
	                ".---",
	                "-.-",
	                ".-..",
	                "--",
	                "-.",
	                "---",
	                ".--.",
                    "--.-",
                    ".-.",
                    "...",
                    "-",
                    "..-",
                    "...-",
                    ".--",
                    "-..-",
                    "-.--",
                    "--.."
                  };

    //CONVERSION

    int n, l;
	l=strlen(s);
	for (int i=0; i<l; i++)
	{
		n=s[i];//ACSII Value

		//OUTPUT

		if (n>=65 && n<=90)
		{
			printf("%s",m[n-65]);
		}
		if (n>=97 && n<=122)
		{
			printf("%s",m[n-97]);
		}
	}
}

int main(void)
{
	//INPUT

	char s[15];
	printf("Enter in English : ");
	gets(s);
	printf("\nMorse Code\n");

	Morse(s);//Function Call
	
	return 0;
}