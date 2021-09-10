#include <stdio.h>

/* replaces each string of one or more blanks by a single blank */
main()
{
  int c, b;

  b = 0;

  while ((c = getchar()) != EOF) {

    if (c == ' ') {
      ++b;

      if (b == 1)
        putchar(' ');
    }

    else {
      b = 0;
      putchar(c);
    }
  }
}
