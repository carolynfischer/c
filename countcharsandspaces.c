#include <stdio.h>
#include <string.h>

int main(void)
{
	char buffer[256];

	printf("Enter your  name and press enter:\n");
	gets( buffer );

	printf("\nYour name has %d characters and spaces!\n", 
			strlen( buffer ));

	return 0;
}

