#include <stdio.h>

main()
{
  int c;
  int i;
  
  for (i = 0; i < 5; i++)
  {
    c = getchar();
    putchar(c);
  }
  
  printf("Verify that getchar() != EOF is %d\n", getchar() != EOF);
  printf("Value of EOF is %d\n", EOF);
    
}

