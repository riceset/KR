#include <stdio.h>

/* print the length of each word */
main()
{
  int c, l, i;

  l = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      for (i = 0; i < l; ++i)
        printf("#");
      printf("\n");
      l = 0;
    }
    else
      ++l;
  }
}
