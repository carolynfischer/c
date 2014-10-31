/* Lets user enter up to 10 integer values 
 * Values are stored in an array named value. If 99 is 
 * entered, the loop stops. */

#include <stdio.h>
int value[10];
int ctr = 0;
int nbr; 

int main(void)
{
	while (ctr < 10 && nbr != 99)
	{
	puts("Enter a number, 99 to quit\n");
	scanf("%d", &nbr); 
	value[ctr] = nbr; 
	ctr++;
	}
	return 0;
}
