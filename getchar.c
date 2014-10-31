#include <stdio.h>

main ()
{
	int c;

	while (c = getchar() != EOF)
		printf("EOF is %d\n", c);
		putchar(c);
	printf("%d - at EOF\n", c);
}
