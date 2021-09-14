#include <stdio.h>
#include <string.h>
#include <process.h>
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
	long int y = 0;
	printf("1.Create File\n2.See List\n3.Add Item\n4.Search by Roll no.\n5.Search by Name\n6.Delete File\n");
	int ch;
	scanf("%d",&ch);
	char gar[5];
	gets(gar);
	switch (ch)
	{
		case 1: f=fopen("student.txt", "wb");
		        printf("No. of Students : ");
		        int s;
		        scanf("%d",&s);
		        printf("\nEnter Students Details\n");
		        for (int i=0; i<s; i++)
		        {
		        	printf("\nName : ");
		        	gets(x.name);
		        	printf("Roll Number : ");
		        	scanf("%d",&x.roll);
		        	printf("Marks : ");
		        	scanf("%d",&x.marks);
		        	fwrite(&x, sizeof(x), 1, f);
		        }
		        fclose(f);
		        break;

		case 2: f=fopen("xyz.txt", "r+");
		        while (fread(&y, sizeof(y), 1, f)==1)
		        {
		        	printf("%ld\t", y);
		        }
		        fclose(f);
		        break;

		case 3: f=fopen("student.txt", "ab");
		        printf("Enter Student Details\n");
		       	printf("\nName : ");
		       	gets(gar);
		       	gets(x.name);
		       	printf("Roll Number : ");
		       	scanf("%d",&x.roll);
		       	printf("Marks : ");
		        scanf("%d",&x.marks);
		       	fwrite(&x, sizeof(x), 1, f);
		        fclose(f);
		        break;

		case 4: f=fopen("student.txt", "rb");
		        printf("Roll Number : ");
		        int r;
		        scanf("%d",&r);
		        while (fread(&x, sizeof(x), 1, f)==1)
		        {
		        	if (x.roll==r)
		        	{
		        		printf("\nName : %s\tRoll Number : %d\tMarks : %d",x.name,x.roll,x.marks);
		        		fclose(f);
		        		exit(0);
		        	}
		        }
		        printf("not found");
		        fclose(f);
		        break;

		case 5: f=fopen("student.txt", "rb");
		        printf("Name : ");
		        gets(gar);
		        char n[15];
		        gets(n);
		        while (fread(&x, sizeof(x), 1, f)==1)
		        {
		        	int i;
		        	i=strcmp(x.name,n);
		        	if (i==0)
		        	{
		        		printf("\nName : %s\tRoll Number : %d\tMarks : %d",x.name,x.roll,x.marks);
		        		fclose(f);
		        		exit(0);
		        	}
		        }
		        printf("not found");
		        fclose(f);
		        break;

		case 6: remove("student.txt");
		        break;
	}
	return 0;
}