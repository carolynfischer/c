#include <stdio.h>

unsigned int age;

int main(void)
{
	printf("Enter your age\n");
	scanf("%d", &age);

	if(( age > 21) && (age <= 65))
	{
	printf("You are an adult\n");
	}
	else if (age >= 66)
	{
		printf("You are a senior\n");
	}
	else
	{
		printf("You are a youngster\n");
	}
}
