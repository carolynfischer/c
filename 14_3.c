/* Write a statement that gets a string 30 characters or shorter. If an asterisk
 * is encountered, truncate the string. */
#include <stdio.h>
#define MAX 31
int main(void)
{
	char string[MAX] = "This is a string with * in it";
	int x;

	printf("This is the original string: %s\n", string);
	printf("This is a modified string: ");
	for (x = 0; x < MAX; x++)
	{
		putchar(string[x]);
		if (string[x] == '*')
			break;
	}
	printf("\n");
	return 0;
}
