#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#define MAX 100000

int line_count(char str[])
{
	if (strlen(str) == 0)
	{
		return 0;
	}
	else
	{
		int lines = 1;
		for (int i = 0; i < strlen(str); ++i)
		{
			if ( str[i] == '\n')
			{
				++lines;
			}
		}
		return lines;
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
	int count = 0;
	char data[MAX];
	while (fscanf(f, "%s", data) != EOF)
	{
		count += line_count(data);
	}

	printf("\n**************************************\n");
	printf("Number of Lines = %d", count);
	printf("\n**************************************\n");
	return 0;
}