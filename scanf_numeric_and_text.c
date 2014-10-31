/* Demonstrates using scanf() to input numeric and text data */

#include <stdio.h>
char lname[257], fname[257];
int count, id_num;

int main(void)
{
	/* Prompt the user */
	/* Limitation: doesn't handle multiple first names, thus
	 * gets() is a more preferred way */

	puts("Enter last name, first name, ID number (max 8 digits) separated");
	puts("by spaces, then press Enter");

	/* Input the three data items */
	/* lname and fname are pointers, thus don't need & */
	count = scanf("%s%s%d", lname, fname, &id_num);

	/* Display the data */
	printf("The items entered:\nlast name\t%s\nfirst name\t%s\nID number\t%d\n", lname, fname, id_num);

	return 0;
}
