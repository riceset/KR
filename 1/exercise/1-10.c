#include <stdio.h>

/* replace tabs by '\t', backspaces by '\b' and backslashes by '\\' */
main()
{
  int c;

  while ((c = getchar()) != EOF) {
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
