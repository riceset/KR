#include <stdio.h>

/* print fahrenheit-celsius table
   for fah = 0, 20, ..., 300 */

int main(void)
{
  int fah, cel, lower, upper, step;

  lower = 0;         /* lower limit of temperature table */
  upper = 300;      /* upper limit */
  step = 20;       /* step size */

  fah = lower;
  while (fah <= upper) {
    cel = 5 * (fah - 32) / 9;
    printf("%3d\t%6d\n", fah, cel);
    fah += step;
  }
}
