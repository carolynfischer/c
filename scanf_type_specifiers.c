#include <stdio.h>
#define MAXVALUE 99

char mychar;
char otherchar;
int myint, i, j;
unsigned myunsigned;
int myarray[6];

int main(void)
{
	puts("This is with newline");
	printf("This is also with newline\n");

	puts("Insert two single charactes");
	scanf("%c %c", &mychar, &otherchar);

	for (i = 0; i < 6 && myint != 99; i++)
	{
		puts("Insert an even integer");
		scanf("%d", &myint);

		while (myint % 2 != 0)
		{
			printf("%d was not an even character, insert again:\n", myint);
			scanf("%d", &myint);
		}
		myarray[i] = myint;
	}

	puts("Insert an unsigned character");
	scanf("%u", &myunsigned);

	printf("Variables are: character %c. integer %d, unsigned integer %u, another character %c\n",  mychar, myint, myunsigned, otherchar);
	for (j = 0; j < 6; j++)
	{
		printf("Array value myarray[%d]=%d\n", j, myarray[j]);
	}

	printf("Jack said, \"Peter Piper picked a peck of pickled peppers.\"");
	return 0;
}
