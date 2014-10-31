/* Demonstrates using array as a struct */

#include <stdio.h>

struct entry {
	char fname[20];
	char lname[20];
	char phone[13];
};

struct entry list[4];
int i;

int main (void)
{
	/* Loop to input data for four people */
	for (i = 0; i < 4; i++)
	{
		puts("Enter first name:");
		scanf("%s", &list[i].fname);
		puts("Enter last name:");
		scanf("%s", &list[i].lname);
		puts("Enter phone number:");
		scanf("%s", &list[i].phone);
	}

	/* Print two empty lines */
	printf("\n\n");

	/* Loop over the entries to display the results */
       for (i = 0; i < 4; i++)
       {
		printf("Name: %s %s\t\tPhone: %s\n", list[i].fname, list[i].lname, list[i].phone);
       }	       
	
	return 0;
}
