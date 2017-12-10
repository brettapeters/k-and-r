#include <stdio.h>

main()
{
  long ns;
  int c;

  ns = 0;

  while ((c = getchar()) != EOF)
    if (c == ' ' || c == '\t' || c == '\n')
      ++ns;
  
  printf("%ld\n", ns);
}