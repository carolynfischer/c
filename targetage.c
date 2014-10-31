#include <stdio.h>

#define TARGET_AGE 88

int year1, year2;

int calcYear(int year1);

int main(void)
{
	//Ask the user for the birth year
	printf("What was the year when you were born? ");
	printf("Enter as a 4-digit year (YYYY): ");
	scanf(" %d", &year1);

	//Calculate the future year and display it
	year2 = calcYear(year1);

	printf("Some born in year %d will be %d in %d\n", year1, TARGET_AGE, year2);

	return 0;
}

int calcYear(int year1)
{
	return(year1 + TARGET_AGE);
}
