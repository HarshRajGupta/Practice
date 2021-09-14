#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <process.h>
#include <conio.h>

const int MAX = 100000;

//BASIC OPERATIONS

void create(int* Arr, int n)
{
	if (n <= MAX)
	{
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", Arr + i);
		}
	}
	else
	{
		printf("\nOVERLOADING\n");
	}
}

void create_list(int*Arr, int n)
{
	static int i = 0;

	if (n == 0)
	{
		return;
	}
	else if (i < MAX)
	{
		scanf("%d", Arr + i);
		++i;
		create_list(Arr, n - 1);
	}
}

//PRINT the numbers stored in Array
void display(int* Arr, int n)
{
	printf("========================================\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", *(Arr + i));
	}
	printf("\n========================================\n");
}

int* copy_array(int* Arr, int n)
{
	int* copy;
	copy = (int*)calloc(n, sizeof(int));
	for (int i = 0; i < n; ++i)
	{
		*(copy + i) = *(Arr + i);
	}
	return copy;
}

//SUM of all elements of Array
int sum(int* Arr, int n)
{
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += *(Arr + i);
	}
	return sum;
}

//BIGGEST number in array
int max(int* Arr, int n)
{
	int max = *(Arr + 0);
	for (int i = 1; i < n; ++i)
	{
		if (*(Arr + i) > max)
			max = *(Arr + i);
	}
	return max;
}


//ROTATION

//REVERSE the Array
void swap(int* Arr, int n)
{
	for (int i = 0; i < n / 2; ++i)
	{
		int temp = *(Arr + i);
		*(Arr + i) = *(Arr + (n - i - 1));
		*(Arr + (n - i - 1)) = temp;
	}
}

//Shift the Array towards LEFT
void rotate_left(int* Arr, int n)
{
	int temp = *(Arr + n);
	*(Arr + n) = *(Arr + 0);

	for (int i = 0; i < n; ++i)
	{
		*(Arr + i) = *(Arr + (i + 1));
	}

	*(Arr + n) = temp;
}

//Shift the Array towards RIGHT
void rotate_right(int* Arr, int n)
{
	int temp = *(Arr + (n - 1));

	for (int i = n - 1; i > 0; --i)
	{
		*(Arr + i) = *(Arr + (i - 1));
	}

	*(Arr + 0) = temp;
}


//ADD & DELETE ELEMENTS

//Add one more element in the SPECIFIC PLACE
void insert(int* Arr, int n)
{
	int pos;
	printf("\nEnter the loction of extra element : ");
	scanf("%d", &pos);

	pos = (pos > n) ? n : pos;

	for (int i = n; i >= pos; i--)
	{
		*(Arr + i) = *(Arr + (i - 1));
	}

	printf("\nEnter the element at place %d : ", pos);
	scanf("%d", Arr + pos);
}

//Add one more element in SORTED Array
void insert_number(int* Arr, int n)
{
	int value;
	scanf("%d", &value);
	for (int i = n - 1; i >= -1; i--)
	{
		if (*(Arr + i) <= value)
		{
			*(Arr + (i + 1)) = value;
			break;
		}
		else
		{
			*(Arr + (i + 1)) = *(Arr + i);
		}
	}
}

//SEARCH and DELETE
int delete_element(int* Arr, int n, int d)
{
	for (int i = 0; i < n; ++i)
	{
		if (*(Arr + i) == d)
		{
			for (int j = i; j < n - 1; ++j)
			{
				*(Arr + j) = *(Arr + (j + 1));
			}
			return 1;//will RETURN the number of elements deleted
		}
	}
	printf("\n========================================\n");
	printf("Number not found\n");
	printf("\n========================================\n");
	return 0;//0 means number not found
}

//DELETE (use search function)
int deleteElement(int* Arr, int n, int d)
{
	//Use SEARCH Function for DETECTION of POSITION
	int pos = jump(Arr, n, d) - 1;
	if (pos >= 0 )
	{
		for (int i = pos; i < n - 1; i++)
		{
			*(Arr + i) = *(Arr + (i + 1));
		}
		return 1;//will RETURN the number of items deleted
	}
	else
	{
		printf("\n========================================\n");
		printf("Number not found\n");
		printf("\n========================================\n");
		return 0;//will RETURN the number of items deleted
	}
}


//OCCURENCE

//FREQUENCY of each element
void frequency(int* Arr, int* Arr2, int n)
{
	for (int i = 0; i < n; ++i)
	{
		int count = 1;

		for (int j = i + 1; j < n; ++j)
		{
			if (*(Arr + i) == *(Arr + j))
			{
				++count;
				*(Arr2 + j) = 0;
			}
		}

		if (*(Arr2 + i) != 0)
			*(Arr2 + i) = count;
	}
}

//DELETE SAME ELEMENTS (Lenght of Array will reduce)
int OnlyUnique(int* Arr, int n)
{
	int m = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n - m; ++j)
		{
			for (int k = j + 1; k < n - m; ++k)
			{
				if (*(Arr + j) == *(Arr + k))
				{
					++m;
					for (int l = k; l < n - m; ++l)
					{
						*(Arr + l) = *(Arr + (l + 1));
					}
				}
			}
		}

	}
	return (n - m); //will RETURN the size of RESULTANT ARRAY
}

//Take FREQUENCY and DELETE SAME elements
int frequency_unique(int* Arr, int* o, int n)
{
	int m = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n - m; ++j)
		{
			for (int k = j + 1; k < n - m; ++k)
			{
				if (*(Arr + j) == *(Arr + k))
				{
					++m;

					*(o + j) = *(o + j) + 1;//Frequency

					for (int l = k; l < n - m; ++l)
					{
						*(Arr + l) = *(Arr + (l + 1));
					}
				}
			}
		}

	}
	return (n - m); //will RETURN the size of RESULTANT ARRAY
}

//SEARCH

int linear(int* Arr, int n, int search)
{
	for (int i = 0; i < n; ++i)
	{
		if (*(Arr + i) == search)
		{
			return (i + 1); //VISIBLE POSITION of number
		}
	}
	return 0;//0 means element not found
}

int binary(int* Arr, int n, int search)
{
	int mid;
	mid = n / 2;

	if (*(Arr + mid) == search)
	{
		return (mid + 1);
	}
	else
	{
		if (search > *(Arr + mid))
		{
			for (int i = mid + 1; i < n; ++i)
			{
				if (*(Arr + i) == search)
				{
					return (i + 1); //VISIBLE POSITION of number
				}
			}
		}
		else
		{
			for (int i = 0; i < mid; ++i)
			{
				if (*(Arr + i) == search)
				{
					return (i + 1); //VISIBLE POSITION of number
				}
			}
		}
	}
	return 0;//0 means element not found
}

int jump(int* Arr, int n, int search)
{
	int i = 0;
	while ((int)(i + sqrt(n)) < n && *(Arr + (int)(i + sqrt(n))) < search)
	{
		i += sqrt(n);
	}
	while (i < n)
	{
		if (*(Arr + i) == search)
		{
			return (i + 1);
		}
		++i;
	}
	return 0;//0 means element not found
}

//SORT

void bubble(int* Arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n - 1; ++j)
		{
			if (*(Arr + j) > *(Arr + (j + 1)))
			{
				int temp = *(Arr + j);
				*(Arr + j) = *(Arr + (j + 1));
				*(Arr + (j + 1)) = temp;
			}
		}
	}
}

void selection(int* Arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = n - 1; j > 0; --j)
		{
			if (*(Arr + (j - 1)) > *(Arr + j))
			{
				int temp = *(Arr + (j - 1));
				*(Arr + (j - 1)) = *(Arr + j);
				*(Arr + j) = temp;
			}
		}
	}
}

void insetion(int* Arr, int n)
{
	for (int i = 1; i < n; ++i)
	{
		int j, temp = *(Arr + i);

		for (j = i - 1; temp < * (Arr + j) && j >= 0; --j)
		{
			*(Arr + (j + 1)) = *(Arr + j);
		}

		*(Arr + (j + 1)) = temp;
	}
}