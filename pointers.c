/* Demonstrates basic usage of pointers */

#include <stdio.h>

/* Declare and initialize var variable */
int var = 1;

/* Declare a pointer to int */
int *ptr;

int main(void)
{
	/* Initialize ptr to point to var */
	ptr = &var;

	/* Access var directly and indirectly */

	printf("Direct access, var = %d", var);
	printf("\nIndirect access, var = %d", *ptr);

	/* Display the addresses in two ways */
	printf("\n\nThe address of var =  %p", &var);
	printf("\nThe address of var = %p\n", ptr);

	return 0;
}
