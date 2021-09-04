#include <stdio.h>

int main(void)
{
  int ch, count;

  count = 0;

  while ((ch = getchar()) != EOF)
  {
    if (ch == ' ') {
      if (count >= 1)
        continue;

      putchar(ch);
      count++;
    }

    else {
      putchar(ch);
      count = 0;
    }
  }
}
