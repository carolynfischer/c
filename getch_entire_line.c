#include <stdio.h>
#include <curses.h>

#define MAX 80

int main(void)
{
	char ch, buffer[MAX + 1];
	int x = 0;

	while((ch = getch()) != '\r' && x < MAX)
			buffer[x++] = ch;

	buffer[x] = '\0';

	printf("%s", buffer);

	return 0;
}
