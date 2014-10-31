/* Three ways to display hello, world */
#include <stdio.h>

int main(void)
{
	char *message = { "Hello, World!" };

	printf("Hello, World!\n");

	puts("Hello, World!");

	while ( putchar(*message) != '\0')
	{
		message++;
	}
	return 0;
}
