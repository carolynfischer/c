/* Display addresses of successive array elements for different data types and 
 * demonstrate relationships between array elements */

#include <stdio.h>

/* Declare a counter and three arrays */

int ctr;
short array_s[10];
float array_f[10];
double array_d[10];

int main(void)
{
	/* Print the table heading */

	printf("\t\tShort\t\t\tFloat\t\t\tDouble");
	printf("\n========================================================================================");
	printf("\n========================================================================================");

	/* Print the address of each array element */
	for (ctr = 0; ctr < 10; ctr++)
	{
		printf("\nElement %d:\t%p\t\t%p\t\t%p", ctr, &array_s[ctr], &array_f[ctr], &array_d[ctr]);
	}

	printf("\n========================================================================================\n");
	return 0;
}
