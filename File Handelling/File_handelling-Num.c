#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<process.h>

int main(int argc, char const *argv[])
{
	FILE *f;
	int ch = 0;
	while (ch != 9)
	{
		printf("1.Create File\n2.See File\n3.Add Item in file\n4.Search in File\n5.Rename\n6.Remove\n");
		printf("Enter your Choice: ");
		scanf("%d", &ch);
		char gar[1];
		gets(gar);
		char file_name[50];
		long int data;
		long int n = 0;
		switch (ch)
		{
		case 1: // Create File
			printf("\nFile Name: ");
			gets(file_name);
			f = fopen(file_name, "w");
			if (f == NULL)
			{
				printf("Can't Create the File");
				exit(0);
			}
			printf("List Size: ");
			scanf("%ld", &n);
			printf("Enter Data\n");
			for (long int i = 0; i < n; ++i)
			{
				scanf("%ld", &data);
				fprintf(f, "%ld\n", data);
			}
			fclose(f);
			break;

		case 2: //See File
			printf("\nFile Name: ");
			gets(file_name);
			f = fopen(file_name, "r");
			if (f == NULL)
			{
				printf("Can't Open the FILE");
				exit(0);
			}
			printf("\n**************************************\n");
			while (fscanf(f, "%ld", &data) != EOF) // EOF = End Of File
			{
				printf("%ld\t", data);
			}
			printf("\n**************************************\n");
			fclose(f);
			break;

		case 3: // Add more
			printf("\nFile Name: ");
			gets(file_name);
			f = fopen(file_name, "a");
			if (f == NULL)
			{
				printf("Can't Create the File");
				exit(0);
			}
			printf("Enter Data : ");
			scanf("%ld", &data);
			fprintf(f, "%ld\n", data);
			fclose(f);
			break;

		case 4: // Search
			printf("\nFile Name: ");
			gets(file_name);
			f = fopen(file_name, "r");
			if (f == NULL)
			{
				printf("Can't Open the FILE");
				exit(0);
			}
			printf("\n1.Search by Position\n2.Search by Value\n");
			scanf("%d", &ch);
			if (ch == 1)
			{
				printf("Position : ");
				long int pos = 0;
				scanf("%ld", &pos);
				fseek(f, (pos - 2) * sizeof(long int), SEEK_SET);
				fscanf(f, "%ld", &data);
				printf("Value at location %ld is *%ld*", pos, data);
			}
			else if (ch == 2)
			{
				printf("Data to Search for : ");
				long j;
				scanf("%ld", &j);
				long i = 0;
				while (fscanf(f, "%ld", &data) != EOF) // EOF = End Of File
				{
					++i;
					if (data == j)
					{
						printf("%ld is stored at Position %ld\n", data, i);
					}
				}
			}
			fclose(f);
			break;

		case 5:
			printf("\nCurrent File Name: ");
			gets(file_name);
			printf("New File Name: ");
			char name[50];
			gets(name);
			rename(file_name, name);
			printf("Done Succesfully\n");
			break;

		case 6:
			printf("\nFile Name: ");
			gets(file_name);
			f = fopen(file_name, "r");
			if (f == NULL)
			{
				printf("Can't Open the FILE");
				exit(0);
			}
			remove(file_name);
			printf("File Deleted Sucessfully\n");
			break;
		}
		printf("\n0.Continue\n1.See Current File\n9.Exit\n");
		scanf("%d", &ch);
		if (ch == 1)
		{
			f = fopen("xyz.txt", "r");
			printf("\n**************************************\n");
			while (fscanf(f, "%ld", &data) != EOF)
			{
				printf("%ld\t", data);
			}
			fclose(f);
			printf("\n**************************************\n");
			printf("\n0.Continue\n9.Exit\n");
			scanf("%d", &ch);
		}
		if (ch == 9)
		{
			printf("\nThanks\n");
			exit(0);
		}
		printf("\n");
	}
	return 0;
}