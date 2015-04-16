#include <stdio.h>
#define MAX 1000

int main()
{
	int n;
	int array[MAX];
	int *p_array;
	int count;

	p_array = &array[0];

	for ( n = 0; n <= 10; n++)
	{
		if (( n % 3 == 0 ) || ( n % 5 == 0 ))
		{
			printf("%d", n);
			array[count] = n;
			count++;
		}
	}

	print_array(p_array, MAX);
}

void print_array(int *p, int n)
{
	int a;

	for ( a = 0; a < n; a++ )
	{
		printf("%d\n", p[a]);
	}
	return 0;
}
