#include <stdio.h>

#define LOWER 0     /* lower limit of table */
#define UPPER 300   /* upper limit */
#define STEP 20     /* step size */

/*print Fahrenheit-Celsius table */

int main(void)
{
  for (int fah = LOWER; fah <= UPPER; fah += STEP)
    printf("%3d\t%6.1f\n", fah, (5.0 / 9.0) * (fah - 32));
}
