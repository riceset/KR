#include <stdio.h>

/* count characters in input */
main()
{
  long nc = 0;

  while (getchar() != EOF)
    ++nc;

  printf("%ld\n", nc);
}
