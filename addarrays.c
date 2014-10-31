/* Write a function names addarrays() that accepts two arrays that are the same size. 
 * The function should add each element in the arrays together and place the values
 * in a third array. */

#include <stdio.h>
#define SIZE 10

/* function prototypes */
void addarrays(int [], int []);

int main(void)
{
	int a[SIZE] = {1,1,1,1,1,1,1,1,1,1};
	int b[SIZE] = {9,8,7,6,5,4,3,2,1,0};
	
	addarrays(a, b);

	return 0;
}
void addarrays(int first[], int second[])
{
	int total[SIZE];
	int counter;
	
	for (counter = 0; counter < SIZE; counter++)
	{
		total[counter] = first[counter] + second[counter];
		printf("%d + %d = %d\n", first[counter], second[counter], total[counter]);
	}

}
