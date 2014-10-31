#include <stdio.h>

main() 
{
  int fahr;
  printf(" F\tC\n");

  for (fahr = 100; fahr >= 0; fahr -= 5)
  {
    printf("%3d\t%3.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));    
  }
}