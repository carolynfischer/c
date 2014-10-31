#include <stdio.h>
#define NR 3

int array[NR][NR] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 }};
int (*p_array)[NR];

void print_array(int (*p)[], int n);

int main (void)
{
	p_array = array;
	print_array(p_array, NR);
	return 0;
}

void print_array(int (*p)[NR], int n)
{
	int a, b;
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < NR; b++)
		{
			printf("%d ", p[a][b]);
		}
		printf("\n");
	}
}
