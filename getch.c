#include <stdio.h>
#include <curses.h>

int main(void)
{
	char ch;
	while ((ch = getch()) != '\r')
		putchar(ch);

	return 0;
}
