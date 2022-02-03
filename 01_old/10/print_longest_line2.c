#include <stdio.h>

#define MAXLINE 1000         /* maximum input line size */

int max_len;                 /* maximum length seen so far */
char curr_line[MAXLINE];     /* current input line */
char lngst_line[MAXLINE];    /* longest line saved here */

int get_line(void);
void copy(void);

/* print longest input line; specialized version */
int main(void)
{
  int len;
  extern int max_len;
  extern char lngst_line[];

  max_len = 0;
  
  while ((len = get_line()) > 0)
    if (len > max_len) {
      max_len = len;
      copy();
    }

  if (max_len > 0)
    printf("%s", lngst_line);

  return 0;
}

int get_line(void)
{
  int c, i;
  extern char curr_line[];

  for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    curr_line[i] = c;

  if (c == '\n') {
    curr_line[i] = c;
    ++i;
  }

  curr_line[i] = '\0';

  return i;
}

void copy(void)
{
  int i;
  extern char curr_line[], lngst_line[];

  i = 0;

  while ((lngst_line[i] = curr_line[i]) != '\0')
    ++i;
}
