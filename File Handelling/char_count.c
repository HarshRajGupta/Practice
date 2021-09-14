#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#define MAX 100000

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
	int count = 0;
	char data[MAX];
	while (fscanf(f, "%s", data) != EOF)
	{
		count += strlen(data);
	}

	printf("\n**************************************\n");
	printf("Number of Words = %d", count);
	printf("\n**************************************\n");
	return 0;
}