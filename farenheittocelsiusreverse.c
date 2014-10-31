#include <stdio.h>

main()
{
	printf("Farenheit to Celsius conversion table\n");	
	float f, c;

	for (f = 100; f >= -10; f -= 5) {
		c = 5 * (f - 32) / 9;
		printf("%3.0f F is\t%4.1f C\n", f, c);

	}
}
