#include <stdio.h>

int get_1_or_2(void);
int answer;
int main(void)
{
	printf("Answer is %d\n", get_1_or_2());
}

int get_1_or_2(void)
{

	while (answer <  1 || answer > 2)
	{
		puts("menu");
		printf("Enter 1 for Yes, 2 for No\n");

		scanf("%d", &answer);

	}
	return answer;
}
