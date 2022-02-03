#include <stdio.h>
#define MAXLINE 1000        /* maximum input line length */
#define LIMIT 80            /* only lines >= than it will be printed */

int get_line(char line[], int maxline);

int main()
{
  int curr_len;
  char curr[MAXLINE];

  while ((curr_len = get_line(curr, MAXLINE)) > 0)
    if (curr_len >= LIMIT)
      printf("length: %d\n", curr_len);
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
