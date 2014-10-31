#include <stdio.h>

int a, b;

int main(void)
{
	// Sets a and b to 0 to start
	a = b = 0;

	// Start with the incremental operator
	// Print them, then decrementing them each time
	// Use prefix mode for b, postfix mode for a.
	
	printf("Count up!\n");
	printf("Post	Pre\n");
	printf("%d	%d\n", a++, ++b);
	printf("%d	%d\n", a++, ++b);
	printf("%d	%d\n", a++, ++b);
	printf("%d	%d\n", a++, ++b);
	printf("%d	%d\n\n", a++, ++b);

	printf("Current values of a and b:\n");
	printf("%d	%d\n\n", a, b);

	printf("Count down!\n");
	printf("%d	%d\n", a--, --b);
	printf("%d 	%d\n", a--, --b);
	printf("%d	%d\n", a--, --b);
	printf("%d	%d\n", a--, --b);
	printf("%d	%d\n", a--, --b);
	return 0;
}
