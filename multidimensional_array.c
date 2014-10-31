/* Demonstrates using a multidimensional array */

#include <stdio.h>
#include <stdlib.h>

/* Declare a three-dimensional array with 1000 elements */

int random_array[10][10][10];
int a, b, c;

int main (void)
{
	// Don't use same values as before
	srand(time(NULL));

	/* Fill the array with random numbers. The C library 
	 * function rand() returns a random number. Use one for loop
	 * for each array subscript. */

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				random_array[a][b][c] = rand();
			}
		}
	}

	/* Now display array elements 10 at a time */

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				printf("\nArray random_array[%d][%d][%d] = %d", a, b, c, random_array[a][b][c]);
			}
			printf("\nPress Enter to display next 10 results, CTRL-C to abort\n");
			getchar();
		}
	}
	return 0;
}
