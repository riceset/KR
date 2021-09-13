#include <stdio.h>

/* print Celsius-Fahrenheit table
 * for celsius = 0, 20, ..., 300 */

main()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("celsius\t\tfahrenheit\n");

  for (celsius = lower; celsius <= upper; celsius += step) {
    fahr = (9.0 / 5.0) * celsius + 32.0;
    printf("%3.0f\t\t%5.1f\n", celsius, fahr);
  }
}
