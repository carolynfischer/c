#include <stdio.h>

#define STEP 5
#define LOWER 0
#define UPPER 100

main() 
{
  int fahr;
  printf(" F\tC\n");

  for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
  {
    printf("%3d\t%3.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));    
  }
}