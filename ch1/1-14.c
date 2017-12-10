#include <stdio.h>

#define SCOPE 'z'-' '

main()
{
  int c, i;
  int chars[SCOPE+1];

  for (i = 0; i <= SCOPE; ++i)
    chars[i] = 0;

  while ((c = getchar()) != EOF)
    ++chars[c-' '];

  for (i = ' '; i <= SCOPE; i++) {
    putchar(i);
    printf(": ");

    while (chars[i]--)
      printf("*");
      
    printf("\n");
  }
}