#include <stdio.h>

void PrintFahCelTable(int, int, int);

int main(void)
{
  PrintFahCelTable(0, 300, 20);
}

void PrintFahCelTable(int lower, int upper, int step)
{
  float fah, cel;

  fah = lower;

  while (fah <= upper) {
    cel = (5.0 / 9.0) * (fah - 32.0);
    printf("%3.0f\t%6.1f\n", fah, cel);
    fah += step;
  }
}
