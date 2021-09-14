#include <stdio.h>
#include <string.h>

//English to Morse Code

void Morse(char s[15])
{
	auto char m[26][5]={
		                    ".-",//A
	                        "-...",//B
        	                "-.-.",//C
	                        "-..",//D
	                        ".",//E
	                        "..-.",//F
	                        "--.",//G
	                        "....",//H
	                        "..",//I
	                        ".---",//J
	                        "-.-",//K
	                        ".-..",//L
	                        "--",//M
	                        "-.",//N
	                        "---",//O
	                        ".--.",//P
                            "--.-",//Q
                            ".-.",//R
                            "...",//S
                            "-",//T
                            "..-",//U
                            "...-",//V
                            ".--",//W
                            "-..-",//X
                            "-.--",//Y
                            "--.."//Z
                       };

    auto int n, l;
	l=strlen(s);
	for (int i=0; i<l; i++)
	{
		n=s[i];//ASCII Value

		if (n>=65 && n<=90)
		{
			printf("%s ",m[n-65]);//OUTPUT (Capital or UpperCase)
		}
		if (n>=97 && n<=122)
		{
			printf("%s ",m[n-97]);//OUTPUT (Small or LowerCase)
		}
	}
}


//Morse Code to English

void English(char k[15][5], int a)
{
	auto char m[26][5]={
		                    ".-",//A
	                        "-...",//B
        	                "-.-.",//C
	                        "-..",//D
	                        ".",//E
	                        "..-.",//F
	                        "--.",//G
	                        "....",//H
	                        "..",//I
	                        ".---",//J
	                        "-.-",//K
	                        ".-..",//L
	                        "--",//M
	                        "-.",//N
	                        "---",//O
	                        ".--.",//P
                            "--.-",//Q
                            ".-.",//R
                            "...",//S
                            "-",//T
                            "..-",//U
                            "...-",//V
                            ".--",//W
                            "-..-",//X
                            "-.--",//Y
                            "--.."//Z
                       };

    auto int n;
    for (int i=0; i<a; i++)
    {
    	for (int j=0; j<26; j++)//Searching
    		{
    			n=strcmp(k[i], m[j]);//Comparison

    			if (n==0)
    			{
    				auto char l;
    				l=j+65;
    				printf("%c",l);//OUTPUT (Capital or UpperCase)
    			}
    		}
    }

}


int main(void)
{
	printf("1.English to Morse\n2.Morse to English\n");

	auto int ch;
	scanf("%d",&ch);

	switch (ch)
	{		
		//English to Morse

		case 1: printf("\nEnglish : ");
		        auto char s[15], g[5];
		        gets(g);//Garbage Value (NOT FOT USING)

		        gets(s);//INPUT
		        printf("\nMorse Code : ");

		        Morse(s);//Function Call
		        printf("\n \nTranslation Complete\n");
		        break;

        
        //Morse to English

		case 2: printf("\nTotal number of Letters : ");
		        auto int n;
		        scanf("%d",&n);

		        printf("Enter one by one\n");
		        auto char c[15][5];

		        for (int i=0; i<n; i++)
		        {
		        	scanf("%s",&c[i]);//INPUT
		        }

		        printf("\nEnglish : ");
		        English(c, n);//Function Call
		        printf("\n \nTranslation Complete\n");
		        break;

		default:printf("Wrong Option Selected");
	}
	return 0;
}