#include <stdio.h>

void print_function(char star);

int main (void)
{
	char star = '*';

	print_function(star);
	return 0;
}

void print_function(char star)
{
	char dash = '-';
	int ctr;

	for (ctr = 0; ctr < 25; ctr++)
	{
		printf("%c%c", star, dash);
	}
}
