#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
main()
{
  int len;               /* current line length */
  char line[MAXLINE];    /* current input line */

  int maxlen;            /* maximum length seen so far */
  char maxline[MAXLINE]; /* longest line saved here */

  maxlen = 0;

  while ((len = get_line(line, MAXLINE)) > 0)
    if (maxlen < len) {
      maxlen = len;
      copy(line, maxline);
    }

  if (maxlen > 0)
    printf("%s", maxline);
}

/* get_line: read a line into s, return length */
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

/* copy: copy 'from' into 'to'; assume 'to' is big enough */
void copy(char from[], char to[])
{
  int i = 0;

  while ((to[i] = from[i]) != '\0')
    ++i;
}
