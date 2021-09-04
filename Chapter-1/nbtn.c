#include <stdio.h>

/* count blank, tabs, newline characters */

int main(void)
{
  int c;
  int blank, tab, newline;
  blank = tab = newline = 0;

  while ((c = getchar()) != EOF) {
    switch (c) {
      case ' ':
        ++blank;
        break;

      case '\t':
        ++tab;
        break;

      case '\n':
        ++newline;
        break;

      default:
        break;
    }
  }

  printf("%d %d %d\n", blank, tab, newline);
}
