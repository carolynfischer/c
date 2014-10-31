#include <stdio.h>

main() 
{
  int lower = -5; /* lower limit of fahr value */
  int upper = 100; /* upper limit of fahr value */
  int step = 5;  /* step size */
  int smallstep = 2; /* if temperatures are low, display more frequently */
  float fahr, celsius;

  fahr = lower;
  
  // table header
  printf("  F\t    C\n");
  
  while (fahr <= upper)
  {
    celsius = 5 * (fahr - 32) / 9;
    
    printf("%3.0f\t%3.1f\n", fahr, celsius);
    if (fahr < 25)
    {
      fahr += smallstep;
    }
    else
    {
      fahr += step;
    }
  }

}