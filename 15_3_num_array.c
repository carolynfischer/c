#include <stdio.h>
#define NR 12

void print_array(int *p, int n);

int array[NR] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
int *p_array;

int main (void)
{
	p_array = &array[0];

	print_array(p_array, NR);
	return 0;
}

void print_array(int *p, int n)
{
	int a;
	for (a = 0; a < n; a++)
	{
		printf("%d\n", p[a]); 
	}
}
