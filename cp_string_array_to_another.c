/* Copy one array of characters into another */

#include <stdio.h>
#define SIZE 10

/* function prototype */
void copyarrays(int [], int []);


int main (void)
{
	int ctr = 0;
	int a[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	int b[SIZE] = { 0,0,0,0,0,0,0,0,0,0};

	puts("Before copy");

	/* values before copy */
	for (ctr = 0; ctr < SIZE; ctr++)
	{
		printf("%d = a[%d], %d = b[%d]\n", ctr, a[ctr], ctr, b[ctr]);
	}

	copyarrays(a, b);

	puts("After copy");

	/* values after copy */
	for (ctr = 0; ctr < SIZE; ctr++)
	{
		printf("%d = a[%d], %d = b[%d]\n", ctr, a[ctr], ctr, b[ctr]);
	}

	return 0;
}

void copyarrays (int orig[], int newone[])
{
	int ctr = 0;
	for (ctr = 0; ctr < SIZE; ctr++)
	{
		newone[ctr] = orig[ctr];
	}
}

