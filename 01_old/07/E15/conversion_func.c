#include <stdio.h>

void convert(float lower, float upper, float step, int mode);

main()
{
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  convert(lower, upper, step, 1);
  convert(lower, upper, step, 0);
}

/* print the conversion table; mode 0 = fahr - celsius, mode 1 = celsius - fahr */
void convert(float lower, float upper, float step, int mode)
{
  float fahr, celsius;

  switch (mode) {
    /* fahrenheit to celsius */
    case 0:
      printf("fahr\t\tcelsius\n");
      for (fahr = lower; fahr <= upper; fahr += step)
        printf("%3.0f\t\t%5.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
      break;

    /* celsius to fahrenheit */
    case 1:
      printf("celsius\t\tfahr\n");
      for (celsius = lower; celsius <= upper; celsius += step)
        printf("%3.0f\t\t%5.1f\n", celsius, (9.0 / 5.0) * celsius + 32.0);
      break;

    default:
      printf("ERROR\n");
  }
}
