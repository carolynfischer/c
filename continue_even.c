#include <stdio.h>

int main (void)
{
	int x;
	for (x = 0; x < 100; x++)
	{
		if (x % 2 != 0)
		{
			continue;
		}
		printf("%d\n", x);
	}
}
