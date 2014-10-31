/* Inputs a list of strings from the keyboard, sorts them, and then displays
 * them onscreen. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINES 25

int get_lines(char *lines[]);
void sort(char *p[], int n);
void print_strings(char *p[], int n);

// Pointers to strings
char *lines[MAXLINES];

/* What does it do?
 * 1) Accept lines of input from the keyboard one at a time until a blank line
 * is entered. 
 * 2) Sort the lines of text into alphabetical order
 * 3) Display the sorted lines onscreen. */
int main (void)
{
	int number_of_lines;

	// Read the lines from the keyboard
	number_of_lines = get_lines(lines);

	if (number_of_lines < 0 )
	{
		puts("Memory allocation error");
		exit(-1);
	}

	sort(lines, number_of_lines);
	print_strings(lines, number_of_lines);

	return 0;
}

/* get_lines - 
 * 1) Keep track of the number of lines entered, and return that value to the
 * calling program after all lines have been entered
 * 2) Don't allow input of more than a preset maximum number of lines
 * 3) Allocate storage space for each line
 * 4) Keep track of all lines by storing pointers to strings in an array
 * 5) Return to the calling program when a blank line is entered. */
int get_lines(char *lines[])
{
	int n = 0;
	char buffer[80]; // Temporary storage space for each line
	
	puts("Enter one line at a time, enter a blank line when done");

	while ((n < MAXLINES) && (gets(buffer) != 0) && (buffer[0] != '\0'))
	{
		if ((lines[n] = (char *)malloc(strlen(buffer) + 1)) == NULL)
		{
			return -1;
		}
		strcpy(lines[n++], buffer);
	}
	return n;
}

void sort (char *p[], int n)
{
	int a, b;
	char *tmp; 

	for (a = 1; a < n; a++)
	{
		for (b = 0; b < n - 1; b++)
		{
			// If first string is bigger than second, returns > 0
			if (strcmp(p[b], p[b + 1]) > 0)
			{
				// Swap values
				tmp = p[b];
				p[b] = p[b + 1];
				p[b + 1] = tmp;
			}
		}
	}
}	

void print_strings (char *p[], int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		printf("%s\n", p[count]);
	}
}
