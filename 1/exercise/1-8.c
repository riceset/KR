#include <stdio.h>

/* count blanks, tabs and newlines */
main()
{
  int c, bl, tb, nl;

  bl = tb = nl = 0;

  while ((c = getchar()) != EOF) {
    switch (c) {
      case ' ':
        ++bl;
        break;
      case '\t':
        ++tb;
        break;
      case '\n':
        ++nl;
        break;
    }
  }
  printf("%d %d %d\n", bl, tb, nl);
}
