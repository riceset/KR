#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
void reverse(char from[], char to[], int from_len);

int main()
{
  int curr_len;
  char curr[MAXLINE];

  char reversed[MAXLINE];

  while ((curr_len = get_line(curr, MAXLINE)) > 0) {
    reverse(curr, reversed, curr_len);
    printf("%s", reversed);
  }

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

void reverse(char from[], char to[], int from_len)
{
  int i;

  // from_len - 2 (\n\0)
  for (i = 0, from_len = from_len - 2; (to[i] = from[from_len]) != '\0'; ++i, --from_len)
    ;

  to[i] = '\n';
  to[i + 1] = '\0';
}
