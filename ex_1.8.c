#include <stdio.h>

/* count tabs, blanks, and newlines */
main()
{
  int c;
  int nb, nt, nl;

  nb = nt = nl = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n')
      ++nl;
    else (c == ' ')
      ++nb;
    else (c == '\t')
      ++nt;
  }
  printf("%d %d %d\n", nl, nb, nt);
}

