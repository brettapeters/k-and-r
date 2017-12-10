#include <stdio.h>

#define MAXLINE 1000

int _getline(char line[], int lim);

main()
{
  int c, i, len;
  char line[MAXLINE];

  while ((len = _getline(line, MAXLINE)) > 0) {
    i = len - 2;
    while (i >= 0 && (line[i] == ' ' || line[i] == '\t'))
      --i;
    if (i >= 0) {
      line[i+1] = '\n';
      line[i+2] = '\0';
      printf("%s", line);
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
