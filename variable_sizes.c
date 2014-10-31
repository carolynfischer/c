/* Tells the size of c variables in bytes */
#include <stdio.h>

int main(void)
{
	printf("\nTYPE\t\t\t\tSIZE");
	printf("\n---------------------------------------");
	printf("\nA char is \t\t\t%d bytes", sizeof( char ));
	printf("\nAn int is \t\t\t%d bytes", sizeof( int ));
	printf("\nA short is \t\t\t%d bytes", sizeof( short ));
	printf("\nA long is \t\t\t%d bytes", sizeof( long ));
	printf("\nA long long is \t\t\t%d bytes", sizeof( long long ));
	printf("\nAn unsigned char is \t\t%d bytes", sizeof( unsigned char ));
	printf("\nAn unsigned int is \t\t%d bytes", sizeof( unsigned int ));
	printf("\nAn unsigned short is \t\t%d bytes", sizeof( unsigned short ));
	printf("\nAn unsigned long is \t\t%d bytes", sizeof( unsigned long ));
	printf("\nAn unsigned long long is \t%d bytes", sizeof( unsigned long long ));
	printf("\nA float is \t\t\t%d bytes", sizeof( float ));
	printf("\nA double is \t\t\t%d bytes", sizeof( double ));
	printf("\nA long double is \t\t%d bytes\n", sizeof( long double ));
	
	return 0;
}
