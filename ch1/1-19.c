#include <stdio.h>

#define MAXLINE 1000

int _getline(char line[], int lim);
void reverse(char s[], int len);

main()
{
  int c, i, len;
  char line[MAXLINE];

  while ((len = _getline(line, MAXLINE)) > 0) {
    reverse(line, len);
    printf("%s", line);
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

void reverse(char s[], int len)
{
  int i, j, tmp;
  
  for (i = 0, j = len-1; i <= j; ++i, --j) {
    tmp = s[i];
    s[i] = s[j];
    s[j] = tmp;
  }

  return;
}