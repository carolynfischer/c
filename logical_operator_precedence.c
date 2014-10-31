/* Initialize variables. Note that c is not less than d,
 * which is one of the conditions to test for.
 * Therefore, the entire expression should evaluate as false. */

#include <stdio.h>

int a = 5, b = 6, c = 5, d = 1;
int x;

int main(void)
{
	printf("Given that a = 5, b = 6, c = 5 and d = 1\n");
	/* Evaluate the expression without parentheses. */
	x = a < b || a < c && c < d;
	printf("Without parentheses the expression x = a < b || a < c && c < d evaluates as %d\n", x);

	x = (a < b || a < c) && c < d;
	printf("With parentheses the expression x = (a < b || a < c) && c < d evaluates as %d\n", x);
	
	return 0;
}
