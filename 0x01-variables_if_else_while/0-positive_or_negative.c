#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *description - Prints if random generated number is positive, zero or negative
 *return: 0(success)
 */
int main(void)
{
  int n;
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  if (n < 0)
    printf("%d is negative\n", n);
  else if (n == 0)
    printf("%d is zero\n", n);
  else
    printf("%d is positive\n", n);
  return (0);
}
