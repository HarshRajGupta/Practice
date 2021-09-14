#include <stdio.h>
#include <string.h>
#define max 100
int main()
{
	char a[max],b[max],;
	printf("Enter 1st word : ");
	gets(a);
	printf("Enter 2nd word : ", );
	gets(b);
	printf("a=%s & b=%s\n",a,b);

	strcpy(a,b);

	//a=b >>> a=harsh & b=raj >>> a=b=raj

	printf("a=%s & b=%s\n",a,b);


	strrev(b);
	
	//reverse the value of b >>> b=raj >>> b=jar

	printf("\n%s\n",b );


	strcat(a,b);

	//a=a+b >>> a=harsh & b=raj >>> a=harshraj

	printf("\n%s\n",a );


	int n;
	n=strlen(b);

	//Lenth or No of characters in b >>> b=raj >>> n=3

	printf("\n%d\n",n );


	n=strcmp(a,b);

	//compare ASCII Value of a & b >>> n=a-b >>> n>0 if a>b >>> n<0 if a<b >>> n=0 if a=b

	return 0;
}