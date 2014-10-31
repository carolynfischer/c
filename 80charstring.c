/* Write code that allocates space for an 80-character string and then inputs a string 
 * from the keyboard and stores it in the allocated space. */

#include <stdio.h>
#include <stdlib.h>

char input[81], *ptr;

int main (void)
{
	puts("Enter a string, maximum 80 characters long");
	
	while (*(ptr = gets(input)) != '\0')
	{
			printf("You entered %s\n", input);

	}
	return 0;
}
