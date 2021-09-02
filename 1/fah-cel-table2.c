#include <stdio.h>

/* print fahrenheit-celsius table
   for fah = 0, 20, ..., 300; floating-point version */

main()
{
  float fah, cel;
  int lower, upper, step;

  lower = 0;         /* lower limit of temperature table */
  upper = 300;      /* upper limit */
  step = 20;       /* step size */

  fah = lower;
  while (fah <= upper) {
    cel = (5.0 / 9.0) * (fah - 32.0);
    printf("%3.0f\t%6.1f\n", fah, cel); /* 3.0 - 3 characters wide with no decimal point. */
    fah += step;
  }
}
