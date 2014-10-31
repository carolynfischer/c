#include <stdio.h>

int x, y;
int product(int x, int y);

int main(void)
{
	printf("Enter first number:");
	scanf("%d", &x);
	printf("Enter second number:");
	scanf("%d", &y);
	printf("Product of values x and y is %d\n", product(x, y));
}

int product(int first, int second)
{
	return first * second;
}
