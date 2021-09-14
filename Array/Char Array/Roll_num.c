#include <stdio.h>
#include <string.h>
int main()
{
	char a[100][20], c[20], garbage[20];
	int n,b;

	//INPUT

	printf("Number of Students : ");
	scanf("%d",&b);
	printf("\nEnter Names\n");
	gets(garbage);
	for(int i=0;i<b;i++)
	{
		gets(a[i]);
	}

	//Main Code

	for (int i=0; i<b; i++)//Bubble Sort
	{
		for (int j=0; j<b-1; j++)
	        {
	        	n=strcmp(a[j],a[j+1]);

		        if(n>0)
		        {
		        	strcpy(c,a[j]);
		        	//c=a[j]

		        	strcpy(a[j],a[j+1]);
		        	//a[j]=a[j+1]

		        	strcpy(a[j+1],c);
		        	//a[j+1]=c
		        }
	        }
	}

	//OUTPUT

    printf("\n========================================\n");
	for (int i=0; i<b; i++)
	{
		printf("%02d - %s\n",i+1,a[i]);
	}
	printf("\n========================================\n");
	return 0;
}