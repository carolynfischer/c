/* Lets user enter up to 10 integer values
 * that are stored in an array named value. If 99
 * is entered, the loop stops. */

#include <stdio.h>

int value[10];
int ctr, nbr = 10;

int main(void)
{
	for (ctr = 0; ctr < 10 && nbr != 99; ctr++)
	{
		puts("Enter a number, 99 to quit");
		scanf("%d", &nbr);
		value[ctr] = nbr;
	}
	return 0;
}

