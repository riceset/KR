#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int getlineF(char line[], int maxline);
void copyF(char to[], char from[]);

/* print the longest input line */
main()
{
  int len;               /* current line length */
  int max;               /* maximum length seen so far */
  char line[MAXLINE];    /* current input line */
  char longest[MAXLINE]; /* longest line saved here */

  max = 0;

  while ((len = getlineF(line, MAXLINE)) > 0)
    if (len > max) {
      max = len;
      copyF(longest, line);
    }

  if (max > 0)
    printf("%s", longest);
}

/* getlineF: read a line into s, return length */
int getlineF(char s[], int lim)
{
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;

  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  s[i] = '\0';

  return i;
}

/* copyF: copyF 'from' into 'to'; assume to is big enough */
void copyF(char to[], char from[])
{
  int i;

  i = 0;

  while ((to[i] = from[i]) != '\0')
    ++i;
}
