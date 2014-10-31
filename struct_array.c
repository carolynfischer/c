/* Demonstrates structures that has array members */

#include <stdio.h>
#define NAMESIZE 30

/* Define and declare a structure to hold the data. */
/* It contains one float variable and two char arrays. */

struct data {
	float amount;
	char fname[NAMESIZE];
	char lname[NAMESIZE];
} rec;

int main (void)
{
	/* Input the data from the keyboard */

	printf("Enter the donor's first and last names, separated by a space: \n");
	scanf("%s %s", &rec.fname, &rec.lname);

	printf("Enter the donation amount: ");
	scanf("%f", &rec.amount);

	/* Display the information. 
	 * Note:  %.2f specifies a floating-point value
	 * to be displayed with two digits to the right
	 * of the decimal point. */

	printf("\nDonor %s %s gave $%.2f.\n", rec.fname, rec.lname, rec.amount);
		
	return 0;
}
