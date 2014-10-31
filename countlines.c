#include <stdio.h>

main()
{
	int c, nl, spaces, tabs;

	nl = 0;
	spaces = 0;
	tabs = 0;
	while((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
		else if (c == '\t')
			++tabs;
		else if (c == ' ')
			++spaces;
	printf("There are %d newlines, %d tabs and %d spaces\n", nl, tabs, spaces);
}
