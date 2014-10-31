// Get numbers until you get one that is greater than 99
#include <stdio.h>

int nbr = 0;
int main(void)
{
	printf("Insert a number, will stop when you enter something bigger than 99");
	while (nbr <= 99)
	{
		scanf("%d", &nbr);
	}
	return 0;
}
