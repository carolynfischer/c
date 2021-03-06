/* Demonstrates using multiple return statements in a function */
#include <stdio.h>

char last_init;
int room;

int room_assign(char last_init);

int main(void)
{
	puts("Enter the first initial of your last name:");
	scanf("%c", &last_init);

	room = room_assign(last_init);

	printf("\nYou need to report to room %d.\n", room);

	return 0;
}

int room_assign(char li)
{
	// This if statement tests whether the first initial of last name
	// is A-M or N-Z with the first group being assigned room 1045 and
	// the rest 1055
	
	// The or part lets us check both lower and uppercases
	
	int room_no;
	if (( li >= 'a' && li <= 'm') || (li >= 'A' && li <= 'M'))
	{
		room_no = 1045;
	}
	else
	{
		room_no =  1055;
	}
	return room_no;
}
