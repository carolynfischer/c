#include <stdio.h>

int number1 = 4, number2 = 9;

int three_power(int power);

int main (void)
{
	printf("3 to the power of %d is %d\n", number1, three_power(number1));
	printf("3 to the power of %d is %d\n", number2, three_power(number2));
	return 0;
}

int three_power ( int power )
{
	if (power < 1)
	{
		return 1;
	}
	else
	{
		return  (3 * three_power(power - 1));
	}
}
