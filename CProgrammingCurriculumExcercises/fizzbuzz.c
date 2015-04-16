#include <stdio.h>

// Implement a program that counts to 100 following these rules:
// * If (n % 3 === 0) print 'fizz'.
// * If (n % 5 === 0) print 'buzz'.
// * When both of the above are true, both 'fizz' and 'buzz' are printed.
// * If neither of the previous were true, print the number.

int main() {
	int n;
	for ( n = 0; n <= 100; n++ )
	{
		if (( n % 3 == 0 ) && ( n % 5 == 0 ))
		{
			printf("fizz\n");
			printf("buzz\n");
		}
		else if ( n % 3 == 0 )
		{
			printf("fizz\n");
		}
		else if ( n % 5 == 0 )
		{
			printf("buzz\n");
		}
		else
		{
			printf("%d", n);
			printf("\n");
		}
	}
	return 0;
}
