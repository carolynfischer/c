#include <stdio.h>

int main (void)
{
	int x;
	int tally = 0;

	for (x = 0; x < 101; x++)
	{
		if (x % 2 == 0) /* if x is even */
			tally++;
	}
	printf("There are %d even numbers.\n", tally);
	return 0;
}
