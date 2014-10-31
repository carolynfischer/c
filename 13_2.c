#include <stdio.h>

int main(void)
{
	int x;
	for (x = 0; x < 5; x++)
	{
		if (x == 3)
			break;
		printf("Enterin loop %d\n", x);
	}
	return 0;
}
