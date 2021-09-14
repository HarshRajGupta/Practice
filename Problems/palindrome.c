#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX 1000

bool palindrome(const char str[])
{
	int n = strlen(str);
	for (int i = 0; i <n/2; ++i)
	{
		if (str[i] != str[n-1-i])
		{
			return false;
		}
	}
	return true;
}

int main(int argc, char const *argv[])
{
	printf("Enter Data : ");
	char str[MAX];
	scanf("%s", str);
	if (palindrome(str) == true)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}