/* Demonstrates a simple for statement */

#include <stdio.h>
#define MAXCOUNT 20
int count;
int array[1000];

int main(void)
{
	for(count = 1; count <= MAXCOUNT; count++)
	{
		printf("%d count\n", count);
	}

	for(count = 0; count < 1000 && array[count] != 0; count++)
	{
		printf("%d", array[count]);
	}
	return 0;
}
