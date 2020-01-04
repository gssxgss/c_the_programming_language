# include <stdio.h>

/**
 * Exercise 1-6 Verify getchar() != EOF is 0 or 1
 */
int main() {
  int c = getchar() != EOF;
  printf("%d\n", c);
  return 0;
}
