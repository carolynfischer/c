#include <stdio.h>

int main (void)
{
	int answer;
	puts("Enter answer, either 0 or 1");
	scanf("%d", &answer);

	if (answer == 0)
		puts("You entered 0");
	else if (answer == 1)
		puts("You entered 1");
	else
		puts("Invalid answer");
	return 0;
}
