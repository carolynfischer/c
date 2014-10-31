#include <stdio.h>
#define MAX 100

int array[MAX];
int count =- 1, maximum, minimum, num_entered, temp;

int main(void)
{
	puts("Enter values, one per line, 0 when finished");

	do 
	{
		scanf("%d", &temp);
		array[++count] = temp;
	} while (count < (MAX -1) && temp != 0);

	num_entered = count;

	// Initial values
	maximum = -32000;
	minimum = 32000;

	for (count = 0; count <= num_entered && array[count] != 0; count++)
	{
		printf("Processing array[%d] = %d\n", count, array[count]);
		if (array[count] > maximum)
		{
			maximum = array[count];
		}

		if (array[count] < minimum)
		{
			minimum = array[count];
		}
	}

	printf("Biggest entered value is %d and smallest entered value is %d\n", maximum, minimum);
	return 0;
}
