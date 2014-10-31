/* Demonstration of frequently used escape sequences */ 

#include <stdio.h>
#define QUIT 3

int get_menu_choice(void);
void print_report(void);

int main(void)
{
	int choice = 0;

	printf("\"We'd like to welcome you to the menu program\"\n");
	printf("Are you ready to make a choice?\n");
	 
	while(choice != QUIT)
	{
		choice = get_menu_choice();

		if (choice == 1)
		{
			printf("\nBeeping the comupter\a\a\a");
		}
		else
		{
			if (choice == 2)
			{
				print_report();
			}
		}
		printf("\nYou chose to quit!\n");
	}

	return 0;
}

int get_menu_choice(void)
{
	int selection = 0;

	do
	{
		printf("\n");
		printf("\n1 - Beep computer");
		printf("\n2 - Display report");
		printf("\n3 - Quit");
		printf("\n");
		printf("\nEnter a selection:\n");

		scanf("%d", &selection);

	} while (selection < 1 || selection > 3);

	return selection;
}

void print_report(void)
{
	printf("\nSample report");
	printf("\n\nSequence\tMeaning");
	printf("\n=========\t========");
	printf("\n\\a\t\tbell (alert)");
	printf("\n\\b\t\tbackspace");
	printf("\n\\f\t\tform feed");
	printf("\n\\n\t\tnewline");
	printf("\n\\r\t\tcarriage return");
	printf("\n\\t\t\thorizontal tab");
	printf("\n\\v\t\tvertical tab");
	printf("\n\\\t\tbackslash");
	printf("\n\\?\t\tquestion mark");
	printf("\n\\'\t\tsingle quotation");
	printf("\n\\\"\t\tdouble quotation");

}
