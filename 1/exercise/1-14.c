#include <stdio.h>

/* print the frequency of alphabetic characters */
int main(void)
{
  int c, i;
  int alphabet[26] = {0};

  while ((c = getchar()) != EOF)
    if (c >= 'a' && c <= 'z')
      ++alphabet[c - 'a'];

    else if (c >= 'A' && c <= 'Z')
      ++alphabet[c - 'A'];

  for (i = 'A'; i <= 'Z'; ++i)
    printf(" %c", i);

  printf("\n");

  for (i = 0; i < 26; ++i)
    printf(" %d", alphabet[i]);

  printf("\n");
}
