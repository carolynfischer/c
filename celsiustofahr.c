#include <stdio.h>

main()
{
  float celsius, fahr; /* declare variables in float for more precise results */
  int lower = -20; /* start of celsius */
  int upper = 30; /* end of celsius */
  int step = 5; /* step upwards */
  
  main()
  {
    celsius = lower; /* initialize value */
    
    # header
    printf("C\tF"); 
    
    while (celsius <= upper)
    {
      fahr = (celsius * 9)/5 + 32;
      printf("%3.0f\t%3.1f", celsius, fahr);
      celsius += step;
    }
  }
}