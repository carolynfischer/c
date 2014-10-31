/* Illustrates the modulus operator. 
 * Inputs a number of seconds, and converts to hours,
 * minutes and seconds. */

#include <stdio.h>

/* Define constants */

#define SECS_PER_MIN 60
#define SECS_PER_HOUR 3600

unsigned seconds, minutes, hours, secs_left, mins_left;

int main(void)
{
	/* Input the number of seconds */

	printf("Input the number of seconds (< 65000): ");
	scanf("%d", &seconds);

	hours = seconds / SECS_PER_HOUR;
	minutes = seconds / SECS_PER_MIN;

	mins_left = minutes % SECS_PER_MIN; 
	secs_left = seconds % SECS_PER_MIN;

	printf("\n%u seconds is equal to \n", seconds);
	printf("%u hours, %u minutes, and %u seconds\n", hours, mins_left, secs_left);

	return 0;
}
