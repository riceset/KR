#include <stdio.h>

int main(void)
{
  int c, l;

  l = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      printf(" - %d\n", l);
      l = 0;
    }
    else {
      putchar(c);
      ++l;
    }
  }
}
