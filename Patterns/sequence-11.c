#include <stdio.h>
int main (void)
{
	int a;
	printf("Number : ");
	scanf("%d",&a);
	for(int i=0; i<a; i++)
	{
		int c=a;

		for(int j=a; j>0; j--)
		{
			printf("%d ",c);
			if(c>a-i)
				c=c-1;
		}

		for(int j=2; j<=a; j++)
		{
			if(c<j)
				c=c+1;
			printf("%d ",c);
		}

		printf("\n");
	}

	for(int i=2; i<=a; i++)
	{
		int c=a;

		for(int j=a; j>0; j--)
		{
			printf("%d ", c);
			if(c>i)
				c=c-1;
		}

		for(int j=2; j<=a; j++)
		{
			if(c<j)
				c=c+1;
			printf("%d ",c );
		}

		printf("\n");
	}
	return 0;
}

// #include <stdio.h>

// int main() 
// {
//     int n;
//     scanf("%d", &n);
//     int len = n*2 - 1;
//     for(int i=0;i<len;i++)
//     {
//         for(int j=0;j<len;j++)
//         {
//             int min = i < j ? i : j;
//             min = min < len-i ? min : len-i-1;
//             min = min < len-j-1 ? min : len-j-1;
//             printf("%d ", n-min);
//         }
//         printf("\n");
//     }
//     return 0;
// }