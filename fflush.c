/* Clearing stdin from extra characters using fflush() */

#include <stdio.h>

int main (void)
{
	int age;
	char name[20];

	// Prompt for user's age
	puts("Enter your age");
	scanf("%d", &age);

	// Clear stdin
	fflush(stdin);

	puts("Enter your name");
	scanf("%s", name);

	// Display data
	printf("Your age is %d and your name is %s\n", age, name);
	return 0;
}
