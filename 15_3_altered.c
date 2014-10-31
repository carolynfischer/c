/* Write a program that declares a 12x12 array of characters. Place X's in every
 * other element. Use a pointer to the array to print the values to the screen
 * in a grid format. */

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
	printf("Now without a funciton\n");
	for (a = 0; a < NR; a++)
	{
		for (b = 0; b < NR; b++)
		{
			printf("%c ", array[a][b]);
		}
		printf("\n");
	} 
	return 0;
}

void print_array(char (*p)[NR], int n)
{
	int a, b;
	printf("starting in the function\n");
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < n; b++)
		{
			printf("%c ", p[a][b]);
		}
		printf("\n");
	}
	return;
}
