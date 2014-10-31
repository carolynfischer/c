#include <stdio.h>
int x;

int main(void)
{	
	printf("Insert a number: \n");
	scanf("%d", &x);

	if ((x >= 1) && (x <= 20))
	{
		printf("X is more or equal to 1 and less or equal to 20\n");
	}
	else
	{
		printf("X is %d\n", x);
	}
	return 0;
}
