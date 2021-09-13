#include <stdio.h>

int power(int, int);

/* test power function */
main()
{
  for (int i = 0; i < 10; ++i)
    printf("%d %d %d\n", i, power(2, i), power(-3, i));
}

/* power: raise base to n-th power; power >= 0 */
int power(int base, int n)
{
  int p = 1;
  
  for (int i = 1; i <= n; ++i)
    p *= base;

  return p;
}
