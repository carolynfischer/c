#include <stdio.h>

#define MAXSTRING 80

char message[] = "Displayed with putchar().";
int main(void)
{
	int count;

	for (count = 0; count < MAXSTRING; count++)
	{
		// Look for the end of the string, when it's found, write a
		// newline character and exit the loop.
	
		if (message[count] == '\0')
		{
			putchar('\n');
			break;
		}
		else
		{
			/* If end of string is not found, write the next
			 * character. */

			putchar(message[count]);
		}
	}

	return 0;
}
