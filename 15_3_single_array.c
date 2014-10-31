#include <stdio.h>
#define NR 12

void print_array(char *p, int n);
char array[NR];

int main (void)
{
	int a;

	for (a = 0; a < NR; a++)
	{
		if (a % 2 == 0)
		{
			array[a] = 'X';
		}
	}

	print_array(array, NR);
	return 0;
}

void print_array(char *p, int n)
{
	int a;
	for (a = 0; a < NR; a++)
	{
		printf("%c ", p[a]);
	}
	printf("\n");
}
