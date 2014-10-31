/* Demonstrates the sizes of multiarray elements */

#include <stdio.h>

int multi[2][4];

int main(void)
{
	printf("\nThe size of multi = %d", sizeof(multi));
	printf("\nThe size of multi[0] = %d", sizeof(multi[0]));
	printf("\nThe size of multi[0][0] = %d\n", sizeof(multi[0][0]));

	return 0;
}
