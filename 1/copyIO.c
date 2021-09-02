#include <stdio.h>

/* copy input to output v1 */

int main(void)
{
  int c;

  c = getchar();

  while (c != EOF)
  {
    putchar(c);
    c = getchar();
  }
}
