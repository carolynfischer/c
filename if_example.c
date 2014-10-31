/* Assign value of x to y only if x is between 1 and 20 */

#include <stdio.h>

int x, y = 0;

int main(void)
{
	printf("Insert value of x:");
	scanf("%d", &x);

	/* Same as the conditional operator below 
	* if(x <= 20)
	* {
	*	y = x;
	* }
	*/

	y = ( x <= 20 ) ? x : y;
	printf("Value of y is %d\n", y);
}
