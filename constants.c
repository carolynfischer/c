/* Demonstrates variables and constants */

#include <stdio.h>

/* Define a constant to convert number of laps to miles */
#define LAPS_PER_MILE 4

/* Define a constant for the current year */
const int CURRENT_YEAR = 2014;

/* Declare the needed variables */
float miles_covered;
int laps_run, year_of_birth, current_age;

int main(void)
{
	/* Input data from user */
	printf("How many laps did you run? ");
	scanf("%d", &laps_run);

	printf("Enter the year of your birth: ");
	scanf("%d", &year_of_birth);

	/* Perform of conversions */ 
	miles_covered = (float)laps_run/LAPS_PER_MILE;
	current_age = CURRENT_YEAR - year_of_birth;

	/* Display results on the screen */
	printf("\nYour ran %.2f miles", miles_covered);
	printf("\nNot bad for someone turning %d this year!\n", current_age);

	return 0;
}
