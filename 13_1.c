#include <stdio.h>

int main(void)
{
	int x;
	for (x = 0; x < 5; x++)
	{
		if (x == 2)
			continue;
		printf("Entered loop %d\n", x);
	}

	return 0;
}		
