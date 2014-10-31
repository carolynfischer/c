#include <stdio.h>

main()
{
  long nc; /* count number of chars */
  int c; /* variable char */
  
  while ((c = getchar()) != EOF)
  {
    nc++;
    putchar(c);
    printf("\n");
    printf("%ld\n", nc);
  }
}