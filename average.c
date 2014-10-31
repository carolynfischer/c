// Finds the average of 5 values inserted by user
#include <stdio.h>

float a, b, c, d, e;
float average(float a, float b, float c, float d, float e);

int main(void)
{

	puts("Enter five numbers, separated by pressing enter:");
	scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
	printf("Average of %f, %f, %f, %f, %f is %f\n", a, b, c, d, e, average(a, b, c, d, e));
	return 0;
}

float average(float a, float b, float c, float d, float e)
{
	float avg;
	avg = (a + b + c + d + e) / 5;
	return avg;
}
