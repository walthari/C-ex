#include <stdio.h>

/* Copy Input to Output; 1st Version */
main()
{
  int c;

  while ((c = getchar()) != EOF)  /* character is not end-of-file CTRL-D */
    putchar(c);
}

