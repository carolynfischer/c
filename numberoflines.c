#include <stdio.h>

main() {
  int c;
  int nl;
  int tabs;
  int blanks;
  
  nl = tabs = blanks = 0;
  
  while((c = getchar()) != EOF)
    if (c == '\n')
      nl++;
    else if (c == '\t')
      tabs++;
    else if (c == ' ')
      blanks++;
  printf("new lines %d\n tabs %d\n blans %d", nl, tabs, blanks);
}