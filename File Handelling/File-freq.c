#include <stdio.h>
#include<stdlib.h>

int freq[10] = {0};

void count(int x)
{
	while (x)
	{
		++freq[(x % 10)];
		x /= 10;
	}
}

int main(int argc, char const *argv[])
{
	printf("File Name : ");
	char file_name[25];
	gets(file_name);
	FILE *f = fopen(file_name, "r");
	if (f == NULL)
	{
		printf("Can't open the File");
		exit(EXIT_FAILURE);
	}
	int data;
	while (fscanf(f, "%d", &data) != EOF) count(data);
	
	printf("\n**************************************\n");
	for (int i = 0; i < 10; i++)
	// for odd >> use (i=1; i<10; i+=2)            
	// for even >> use (i=0; i<10; i+=2)
	{
		printf("%d  :  %d\n", i, freq[i]);
	}
	printf("\n**************************************\n");
	return 0;
}