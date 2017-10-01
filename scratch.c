#include <stdio.h>

#define MAXHIST 15
#define MAXWORD 10
#define IN 1
#define OUT 0

main()
{
  int c, i, nc, state;
  int len;
  int maxvalue;
  int ovflow;
  int wl[MAXWORD];

  state = OUT;
  nc = 0;
  ovflow = 0;
  for (i = 0; i < MAXWORD; ++i)
    wl[i] = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
      if (nc > 0)
