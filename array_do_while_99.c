/* Enables user to enter up to 10 integer values
 * which are stored in an array named value. If 99
 * is entered, the loop stops. */

#include <stdio.h>

int value[10];
int ctr = 0;
int nbr;

int main(void)
{
	do
	{
		puts("Enter a number, 99 to quit");
		scanf("%d", &nbr);
		value[ctr] = nbr;
		ctr++;
	
	} while (ctr < 10 && nbr != 99);
}
