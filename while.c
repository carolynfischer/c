// Demonstrates a simple while statement
#include <stdio.h>

#define MAXCOUNT 20
int count; 

int main(void)
{
	// Print the numbers 1 through 20
	count = 1;

	while (count <= MAXCOUNT)
	{
		printf("%d\n", count);
		count++;
	}

	int x = 0;
	while (x < 10)
	{
		printf("\nThe value of x is %d", x);
		x++;
	}
	printf("\n");
	return 0;
}
