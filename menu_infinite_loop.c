/* Demonstrates an infinite loop to implement a menu system. */

#include <stdio.h>
#define DELAY 150000000

int menu(void);
void delay(void);

int main(void)
{
	int choice;

	while(1)
	{
		/* Get the user's selection */
		choice = menu();

		/* Branch based on the input */
		if (choice == 1)
		{
			puts("Executing task A");
			delay();
		}
		else if (choice == 2)
		{
			puts("Executing task B");
			delay();
		}
		else if (choice == 3)
		{
			puts("Executing task C");
			delay();
		}
		else if (choice == 4)
		{
			puts("Executing task D");
			delay();
		}
		else if (choice == 5)
		{
			puts("Exiting program...");
			delay();
			break;
		}
		else 
		{
			puts("Invalid choice, try again");
			delay();
		}
	}

	return 0;
}

int menu(void)
{
	int reply;

	puts("Enter 1 for task A");
	puts("Enter 2 for task B");
	puts("Enter 3 for task C");
	puts("Enter 4 for task D");
	puts("Enter 5 to exit");

	scanf("%d", &reply);

	return reply;
}

void delay(void)
{
	long x;
	for (x = 0; x < DELAY; x++)
		;
}
