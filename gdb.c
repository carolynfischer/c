#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t foo_len(const char *s);

int main (int argc, int *argv[])
{
	const char *a = "Tere";
	printf("size of a = %d\n", foo_len(a));
	return 0;
}

size_t foo_len(const char *s)
{
	return strlen(s);
}	
