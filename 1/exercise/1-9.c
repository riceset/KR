#include <stdio.h>

/* replaces each string of one or more blanks by a single blank */
main()
{
  int c, b;

  b = 0;

  while ((c = getchar()) != EOF) {

    if (c != ' ') {
      b = 0;
      putchar(c);
    }

    else {
      ++b;
      if (b == 1)
        putchar(' ');
    }
  }
}
