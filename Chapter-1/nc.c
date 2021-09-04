#include <stdio.h>

/* count characters in input v1 */

int main(void)
{
  long nc = 0;

  while (getchar() != EOF)
    ++nc;

  printf("%ld\n", nc);
}
