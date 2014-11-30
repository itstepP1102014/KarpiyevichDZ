#include <assert.h>
#include <stdio.h>

int main ()
{
  int a, b;
  int r
    = scanf ("%d%d", &a, &b);
  assert (r == 2);
    printf (("a + b = %d\n"
             "a - b = %d\n"
             "a * b = %d\n"
             "a / b = %d\n"
             "a %% b = %d\n"),
            a + b, a - b, a * b, a / b, a % b);

  return 0;
}
