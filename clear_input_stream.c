/* Clearing stdin from extra input characters */

#include <stdio.h>

void clar_kb(void);

int main (void)
{
	int age;
	char name[20];

	// Prompt for user's age
	puts("Enter your age");
	scanf("%d", &age);

	// Clear any extra characters
	clear_kb();

	// Prompt for user's name
	puts("Enter your name");
	scanf("%s", name);

	// Display the data
	printf("Your age is %d and your name is %s\n", age, name);

	return 0;
}

void clear_kb(void)
{
	char junk[80];
	gets(junk);
}
