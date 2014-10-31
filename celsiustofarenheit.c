#include <stdio.h>

main()
{
	float f, c;

	for (c = -20; c < 50; c += 2) 
	{
		f = ((9 * c) / 5) + 32;
		printf("%3.0f C is %3.0f F\n", c, f);
	}
}
