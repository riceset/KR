#include <stdio.h>

/* copies input to output replacing each tab by \t, each backspace by \b and each backslash by \\ */

int main(void)
{
  int c;

  while ((c = getchar()) != EOF)
  {
    switch (c) {
      case '\t':
        printf("\\t");
        continue;
        break;

      case '\b':
        printf("\\b");
        continue;
        break;

      case '\\':
        printf("\\\\");
        continue;
        break;
    }
    putchar(c);
  }
}
