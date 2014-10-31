#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/* malloc for 10 float values */
	float *numbers;
	numbers = (float *) malloc(10 * sizeof(float));

	if (numbers == NULL)
	{
		printf("Could not allocate memory!\n");
		exit(1);
	}
	printf("Successfully allocated memory, pointer is %p\n", numbers);
	
	return 0;
}	
