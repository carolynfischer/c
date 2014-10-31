#include <stdio.h>
#include <stdlib.h>

float x, y;
float product(float x, float y);

int main(void)
{
	printf("Enter first number:");
	scanf("%f", &x);
	printf("Enter second number:");
	scanf("%f", &y);
	printf("Product of values x and y is %f\n", product(x, y));
}

float product(float first, float second)
{
	float a;
	if ( second == 0 )
	{
		printf("Cannot divide by zero!\n");
		exit(1);
	}
	else
	{
		a = first / second;
	}
	return a;
}
