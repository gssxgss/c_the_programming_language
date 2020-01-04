# include <stdio.h>
#include <stdbool.h>

/**
 * Exercise 1-9 Trim spaces
 */
int main () {
  int c;
  bool is_prev_char_space = false;
  while ((c = getchar()) != EOF) {
    if (is_prev_char_space) {
      if (c != ' ') {
        putchar(c);
        is_prev_char_space = false;
      }
    } else {
      if (c == ' ') {
        is_prev_char_space = true;
      }
      putchar(c);
    }
  }
  return 0;
}
