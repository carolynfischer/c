#include <stdio.h>

int main(void)
{
	char tlcorner = 201;
	char blcorner = 200;
	char trcorner = 187;
	char brcorner = 188;
	char straight = 205;
	int i, j;

	printf("%c", tlcorner);
	for (i = 0; i < 48; i++ )
		printf("%c", straight);

	printf("%c\n", trcorner);

	for (j = 0; j < 15; j++)
	{
		for (i = 0; i < 50; i++)
			printf("%c", straight);
		printf("\n");
	}

	printf("%c", blcorner);
	for (i = 0; i < 48; i++)
		printf("%c", straight);
	printf("%c\n", brcorner);

	return 0;
}
