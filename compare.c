#include <stdio.h>

int x, y;

int main(void)
{
	printf("Enter two numbers:\n");
	scanf("%d %d", &x, &y);
	printf("\n%d is bigger\n", (x > y) ? x : y); 
	return 0;	
}
