/* Change the program in excercise 3. Instead of declaring var as a global
 * variable, change it to a local variable in main(). The program should still
 * print var in  a separate function. Do you need to pass var as a parameter to
 * the function? */

#include <stdio.h>


void ext_func(int variable);

int main (void)
{
	int var = 9;
	ext_func(var);
	return 0;
}

void ext_func(int variable)
{
	printf("Value of var is %d\n", variable);
}
