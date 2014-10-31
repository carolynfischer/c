#include <stdio.h>

float a, b;

int main(void)
{

	puts("Enter two floating point numbers");
	scanf("%f %f", &a, &b);

	printf("Two numbers entered were %f and %f and their product is %f\n", a, b, a * b);
	return 0;
}

