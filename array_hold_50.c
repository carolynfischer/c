#include <stdio.h>

int x,y;
int main(void)
{
	for(x = 0; x < 100; x++)
	{
		printf("x is now %d", x);
	}
	printf("value of x is %d", x);


	for (x = 0; x < 10; x++)
	{
		for (y = 5; y > 0; y--)
		{
			puts("X");
		}
	}

	for (x = 1; x <= 100; x+= 3)
	{
		printf("%d\n", x);
	}
	return 0;
}
