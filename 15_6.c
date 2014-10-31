/* write a prototype for a function that takes an array of pointers to type char
 * as its one argument and returns void */

/* How would the function know how many elements are in the array of pointers 
 * passed to it? */

/* It has no way of knowing. The number of elements has to be passed as a second
 * argument. */

void array_to_ptrs(char *p[]);

void array_to_ptrs(char *p[])
{
	int count = 0;

	while (p[count] != '\0')
	{
		printf("%s ", p[count]);
		count++;
	}
}
