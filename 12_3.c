/* Wrote a program that declares a global variable of type int called var.
 * Initialize var to any value. The program should print the value of var in a
 * function (not main()). Do you need to pass var as a parameter to the
 * function? */

#include <stdio.h>

int var = 9;

void ext_func(void);

int main (void)
{
	ext_func();
	return 0;
}

void ext_func(void)
{
	extern int var;
	printf("Value of var is %d\n", var);
}
