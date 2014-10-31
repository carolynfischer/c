#include <stdio.h>
#define MAXVALUES 20

int record = 0, counter;

int main (void)
{

	while (record < 100)
	{
		printf("\nRecord %d", record);
		printf("\nGetting next number...");
		record++;
	}

	for (counter = 1; counter < MAXVALUES; counter++)
	{
		printf("\nCounter = %d", counter);
	}
	return 0;
}
