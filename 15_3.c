#include <stdio.h>
#define NR 12

char array[NR][NR];
void print_array(char (*p)[NR], int n);

int main (void)
{
	int a, b;

	for (a = 0; a < NR; a++)
	{
		for (b = 0; b < NR; b++)
		{
			if ((a % 2 == 0) && (b % 2 == 0))
			{
				array[a][b] = 'X';
			}
		}
	}

	print_array(array, NR);
	return 0;
}

void print_array(char (*p)[NR], int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < n; b++)
		{
			printf("%c ", p[a][b]);
		}
		// print line break
		printf("\n");
	}
}
