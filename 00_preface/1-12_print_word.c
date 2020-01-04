# include <stdio.h>
# include <stdbool.h>

/**
 * Exercise 1-12 Print a word per line
 */
int main() {
  int c;
  bool is_in_newline = false;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (!is_in_newline) {
        putchar('\n');
        is_in_newline = true;
      }
    } else {
      putchar(c);
      is_in_newline = false;
    }
  }
  return 0;
}
