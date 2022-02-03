#include <stdio.h>

main()
{
  float celsius, fahr, upper, lower, step;

  upper = 300;
  lower = 0;
  step = 20;

  printf("fahr\t\tcelsius\n");

  for (fahr = upper; fahr >= lower; fahr -= step) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f\t\t%5.1f\n", fahr, celsius);
  }
}
