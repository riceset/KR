#include <stdio.h>
#define MAXLINE 1000        /* maximum input line length */

int get_line(char line[], int maxline);
void copy(char from[], char to[]);

int main()
{
  int curr_len;             /* current line length */
  char curr[MAXLINE];       /* current line */

  int longest_len;          /* longest line's length */
  char longest[MAXLINE];    /* longest line seen so far */

  longest_len = 0;

  while ((curr_len = get_line(curr, MAXLINE)) > 0) {
    if (longest_len < curr_len) {
      longest_len = curr_len;
      copy(curr, longest);
    }
    printf("length: %d\n", curr_len);
  }

  // if there was a line
  if (longest_len > 0)
    printf("longest: %d\nline: %s", longest_len, longest);

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

// copy 'from' into 'to'
void copy(char from[], char to[])
{
  int i = 0;

  while ((to[i] = from[i]) != '\0')
    ++i;
}
