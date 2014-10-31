/* Demonstrates of declaring and using a pointer to a function */
#include <stdio.h>

// Function prototype
double square(double x);

// Pointer declaration
double (*ptr)(double x);

int main (void)
{
	// Initialize p to point to square()
	ptr = square;

	// Call square() two ways
	printf("%.2f %.2f \n", square(6.6), ptr(6.6));

	return 0;
}

double square(double x)
{
	return x * x;
}
