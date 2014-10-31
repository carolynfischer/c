/* Write code that declares a type float variable, declares and initializes a pointer to the 
 * variable, and declares and initializes a pointer to the pointer. */

/* Continuing with the example, say that you want to use the pointer to a pointer to assign
 * the value 100 to the variable named variable. What, if anything, is wrong with the following statement? i
 * *ppx = 100?
 * Answer - it should be **ppx = 100 instead, otherwise it would assign 100 to px, which is incorrect as it 
 * is just a pointer. */

#include <stdio.h>

int main (void)
{
	float x;
	float *px = &x;
	float **ppx = &px;

	return 0;
}
