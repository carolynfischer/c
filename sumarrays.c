/* Write a function called sumarrays() that accepts two arrays as arguments, totals all values in both arrays
 * and returns the total to the calling program. */
#include <stdio.h>
#define MAX1 5
#define MAX2 7

int sumarrays(int array[], int length);
int first[MAX1] = { 1,2,3,4,5 }, second[MAX2] = { 6,7,8,9,10,11,12 };

int main(void)
{
	
	printf("The total of array one is %d and total of array two is %d\n", sumarrays(first, MAX1), sumarrays(second, MAX2));

	return 0;
}

int sumarrays(int array[], int length)
{	
	int count, total = 0;
	for (count = 0; count < length; count++)
	{
		total += array[count];
	}	
	return total;
}
