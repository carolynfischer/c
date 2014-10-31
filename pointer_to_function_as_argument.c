/* Demonstrates passing a pointer to a function as an argument */
#include <stdio.h>

// Function prototypes. func1() takes as its one argument a
// pointer to a function that takes no arguments and has no
// return value.

void func1(void (*p)(void));
void one(void);
void two(void);
void other(void);

int main (void)
{
	// Pointer to a function
	void (*ptr)(void);
	int nbr;

	for (;;)
	{
		puts("Enter an integer between 1 and 10, enter 0 to exit");
		scanf("%d", &nbr);

		if (nbr == 0)
			break;
		else if (nbr == 1)
			ptr = one;
		else if (nbr == 2)
			ptr = two;
		else 
			ptr = other;
		func1(ptr);
	}
	return 0;
}

void func1(void (*p)(void))
{
	p();
}

void one(void)
{
	puts("You entered one");
}

void two(void)
{
	puts("You entered two");
}

void other(void)
{
	puts("You entered something other than 1 or 2");
}
