/* Demonstrates if statements and some of C's relational  operators */

#include <stdio.h>
#define CURRENTYEAR 2014

int birth_year, age;

int main(void)
{
	printf("Enter the year you were born: \n");
	// Adding a space here after %d causes the program to never finish!
	scanf("%d", &birth_year);

	// Two tests to check if the user was born on a leap year
	if (birth_year % 4 == 0)
	{
		printf("You were born in a leap year!\n");
	}
	else
	{
		printf("You were not born in a leap year!\n");
	}

	age = CURRENTYEAR - birth_year;
	printf("You are now %d years old\n", age);

	// Can check on voting age as well as on drinking age
	if (age >= 18)
	{	
		printf("You have reached voting age!\n");
	}

	if (age <= 21)
	{
		printf("It is illegal for you to drink alcohol!\n");
	}
	return 0;
}

