#include <bits/stdc++.h>
using namespace std;

long long binary(long long numeric)
{
	long long int binary {0};
	long long int i {0};
	while(numeric != 0)
	{
		binary += ((numeric%2)*pow(10,i));
		++i;
		numeric /= 2;
	}
	return binary;
}

long long numeric(long long binary)
{
	long long int numeric {0};
	long long int i {0};
	while(binary != 0)
	{
		numeric += ((binary%10)*pow(2,i));
		++i;
		binary /= 10;
	}
	return numeric;
}

int main(void)
{
	cout << "1.Whole Number to Binary\n2.Binary Number to Whole" << endl;
	int ch {0};
	cin >> ch;
	long long int number {0};
	switch (ch)
	{
		case 1: cout << "Enter a Whole Number : ";
		            cin >> number;
		            number = binary(number);
		            break;
		case 2: cout << "Enter a BInary Number : ";
		            cin >> number;
		            number = numeric(number);
		            break;
	}
	cout << "\n=========================\n";
	cout << number;
	cout << "\n=========================" << endl;
	return 0;
}