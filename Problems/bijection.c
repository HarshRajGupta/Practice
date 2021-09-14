#include <stdio.h>

double f(int x)
{
	return (x * x * x) - (14 * x * x) + (35 * x) + 50;
}

void root(double a, double b)
{
	if (f(a) < 0.01 && f(a) > -0.01)// checking lower limit
	{
		printf("%lf is the root", a);;
	}
	else if (f(b) < 0.01 && f(b) > -0.01)// checking upper limit
	{
		printf("%lf is the root", b);
	}
	else if ((a > b && a - b < 0.01) || (b > a && b - a < 0.01))// Applying bijection
	{
		printf("%lf is the root", b);
	}
	else if (f((a + b) / 2) < 0.01 && f((a + b) / 2) > -0.01)
	{
		printf("%lf is the root", (a + b) / 2);
	}
	else if (f(a)*f((a + b) / 2) < 0)
	{
		root(a, (a + b) / 2);
	}
	else
		root((a + b) / 2, b);

}

int main(void)
{
	printf("Enter Limits in increasing order : ");
	double a, b;
	scanf("%lf %lf", &a, &b);
	if (f(a)*f(b) <= 0)
	{
		root(a, b);
	}
	else
		printf("Can't apply bijection method");

	return 0;
}