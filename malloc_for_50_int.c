#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	/* allocate memory for an array of 50 integers */
	int *numbers;
	numbers = (int *) malloc(50 * sizeof(int));

	if (numbers == NULL)
	{
		printf("Cannot allocate memory!\n");
		exit(1);
	}
	printf("Memory allocation successful, pointer is %p!\n", numbers); 

	return 0;
}
