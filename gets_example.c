#include <stdio.h>

char line[257];

int main(void)
{
	puts("Enter a string");
	gets(line);

	printf("You entered %s\n", line);

	return 0;
}
