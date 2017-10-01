#include <stdio.h>

/* swapping numbers */
main()
{
  int a, b, c;

  printf("Enter a number: ");
  scanf("%d", &a);
  printf("Enter another number: ");
  scanf("%d", &b);

  printf("You entered %d and %d\n", a, b);

  c = a;
  a = b;
  b = c;

  printf("Now I swap them: %d and %d\n", a, b);
  return 0;
}
