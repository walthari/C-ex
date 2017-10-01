#include <stdio.h>

#define IN 1               /* inside a word */
#define OUT 0              /* outside a word */

/* print the input one word per line */
int main(void)
{
  int c, state;

  state = OUT;
  while ((c == getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (state == IN) {
	state = OUT;
	putchar('\n');
      }
    } else {
        state = IN;        /* beginning of word */
        putchar(c);
    }
  }
  return 0;
}

