#include <stdio.h>
#include <process.h>
#include <string.h>
struct student
{
	char name[20];
	int roll;
	int marks;
};

int main(void)
{
	FILE *f;
	struct student x;
	printf("1.Create File\n2.See List\n3.Add Item\n4.Search by Roll no.\n5.Search by Name\n6.Delete File\n");
	int ch;
	scanf("%d", &ch);
	char gar[5];
	gets(gar);
	switch (ch)
	{
	case 1:
		f = fopen("student_file.txt", "wb");
		if (f == NULL)
		{
			/* code */
		}
		printf("No. of Students : ");
		int s;
		scanf("%d", &s);
		printf("\nEnter Students Details\n");
		for (int i = 0; i < s; i++)
		{
			printf("\nName : ");
			gets(x.name);
			printf("Roll Number : ");
			scanf("%d", &x.roll);
			printf("Marks : ");
			scanf("%d", &x.marks);
			fwrite(&x, sizeof(x), 1, f);
		}
		fclose(f);
		break;

	case 2:
		f = fopen("student_file.txt", "rb");
		while (fread(&x, sizeof(x), 1, f) == 1)
		{
			printf("\nName : %s\tRoll Number : %d\tMarks : %d", x.name, x.roll, x.marks);
		}
		fclose(f);
		break;

	case 3:
		f = fopen("student_file.txt", "ab");
		printf("Enter Student Details\n");
		printf("\nName : ");
		gets(gar);
		gets(x.name);
		printf("Roll Number : ");
		scanf("%d", &x.roll);
		printf("Marks : ");
		scanf("%d", &x.marks);
		fwrite(&x, sizeof(x), 1, f);
		fclose(f);
		break;

	case 4:
		f = fopen("student_file.txt", "rb");
		printf("Roll Number : ");
		int r;
		scanf("%d", &r);
		while (fread(&x, sizeof(x), 1, f) == 1)
		{
			if (x.roll == r)
			{
				printf("\nName : %s\t\tRoll Number : %2d\t\tMarks : %2", x.name, x.roll, x.marks);
				exit(0);
			}
		}
		printf("NOT FOUND\n");
		fclose(f);
		break;

	case 5:
		f = fopen("student_file.txt", "rb");
		printf("Name : ");
		gets(gar);
		char n[15];
		gets(n);
		while (fread(&x, sizeof(x), 1, f) == 1)
		{
			int i;
			i = strcmp(x.name, n);
			if (i == 0)
			{
				printf("\nName : %s\t\ttRoll Number : %d\t\tMarks : %d", x.name, x.roll, x.marks);
				exit(0);
			}
		}
		printf("NOT FOUND\n");
		fclose(f);
		break;

	case 6:
		f = fopen("student_file.txt", "rb");
		FILE *temp = fopen("temprorary.txt", "wb");
		printf("Roll Number to delete from list: ");
		int roll;
		scanf("%d", &roll);
		while (fread(&x, sizeof(x), 1, f) == 1)
		{
			if (x.roll != roll)
			{
				fwrite(&x, sizeof(x), 1, temp);
			}
		}
		fclose(f);

	case 7: remove("student_file.txt");
		break;
	}
	return 0;
}