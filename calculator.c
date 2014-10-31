/* Write a program that works like a calculator. The program should allow for
 * addition, subtraction, multiplication and division. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	static float first;
	static float second;
	char operation;
	float answer;

	puts("Enter first number");
	scanf("%f", &first);
	puts("Enter second number");
	scanf("%f", &second);

	puts("Enter operation, either +, -, * or /");
	scanf("%s", &operation);
	
	switch (operation)
	{
		case '+':
			answer = first + second;
			printf("Answer is %.2f\n", answer);
			break;
		case '-':
			answer = first - second;
			printf("Answer is %.2f\n", answer);
			break;
		case '*':
			answer = first * second;
			printf("Answer is %.2f\n", answer);
			break;
		case '/':
			if (second == 0)
			{
				puts("Can't divide by 0");
				exit(1);
			}
			answer = first / second;
			printf("Answer is %.2f\n", answer);
			break;
		default:
			puts("Did not understand operation");
	}
	return 0;
}
