/* Demonstrates continue statement, by removing all of the vowels from a string
 * the user entered. */

#include <stdio.h>

int main (void)
{
	//Declare a buffer for input and a counter variable
	char buffer[81];
	int ctr;

	//Input a line of text
	
	puts("Enter a line of text");
	gets(buffer);

	//Go through the string, displaying only those characters that are not
	//lowercase vowels.
	
	for (ctr = 0; buffer[ctr] != '\0'; ctr++)
	{
		if (buffer[ctr] == 'a' || buffer[ctr] == 'e' 
			|| buffer[ctr] == 'i' || buffer[ctr] == 'o' 
			|| buffer[ctr] == 'u')
		{
			continue;
		}	
			//If not a vowel, display it
			putchar(buffer[ctr]);
	}

	return 0;
}
