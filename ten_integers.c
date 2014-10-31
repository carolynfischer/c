#include <stdio.h>

int values[10];
int i, j, myint, sum;

int main(void)
{

	puts("Insert 10 integer values!");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &myint);
		values[i] = myint;
	}

	puts("Entered values were:");
	for (j = 0; j < 10; j++)
	{
		sum += values[j];
		printf("values[%d] = %d\n", j, values[j]);
	}
	printf("Sum of all values is %d\n", sum);

	return 0;
}
