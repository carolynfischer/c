/* Write a function that accepts two strings. Use the malloc() function to allocate
 * enough memory to hold the two strings after they have been concatenated (linked). 
 * Return a pointer to the new string. */

#include <stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //malloc

/* function prototype */
char * concatenate_strings(char *, char *);


int main(void)
{
	char *a = "Hello, ";
	char *b = "World";

	printf("Concatenated string is %s\n", concatenate_strings(a, b));
	return 0;
}

char * concatenate_strings(char * first, char * second)
{
	int x, y, counter;
	/* p is used to step through the string,
	 * combined will remain pointed to the start of the string */
	char *combined, *p;

	x = strlen(first);
	y = strlen(second);

	combined = malloc((x + y) * sizeof(char));
	
	p = combined;
	for (counter = 0; counter < x; counter++)
	{
		*p++ = first[counter];
	}

	for (counter = 0; counter < y; counter++)
	{
		*p++ = second[counter];
	}
	*p = '\0';

	return combined;
}

