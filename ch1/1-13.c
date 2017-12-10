#include <stdio.h>

#define MAXLENGTH 20

main()
{
  int c, i, j, n;
  int words[MAXLENGTH];
  for (i = 0; i < MAXLENGTH; ++i)
    words[i] = 0;

  n = 0;
  
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (n > 0)
        ++words[n-1];
      n = 0;
    }
    else
      ++n;
  }

  for (i = 0; i < MAXLENGTH; ++i) {
    printf("%2d: ", i+1);

    while (words[i]--)
      printf("*");
      
    printf("\n");
  }
}