#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);

int main()
{
  // TODO
  return 0;
}

// read a line, return its length
int get_line(char line[], int maxline)
{
  int c, i;

  for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    line[i] = c;

  if (c == '\n') {
    line[i] = c;
    ++i;
  }

  line[i] = '\0';

  return i;
}
