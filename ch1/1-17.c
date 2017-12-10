#include <stdio.h>

#define MAXLINE 81

int _getline(char line[], int lim);
void copy(char to[], char from[]);

main()
{
  int c, len;
  char line[MAXLINE];
  char longest[MAXLINE];

  while ((len = _getline(line, MAXLINE)) > 0) {
    if (len == MAXLINE-1 && line[len-1] != '\n') {
      printf("%s", line);
      while ((c = getchar()) != EOF && c != '\n')
        putchar(c);
      printf("\n");
    }
  }

  return 0;
}

int _getline(char s[], int lim)
{
  int c, i;

  for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    s[i] = c;

  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  s[i] = '\0';
  return i;
}
