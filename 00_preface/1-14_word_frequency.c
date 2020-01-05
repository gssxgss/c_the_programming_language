#include <stdio.h>
#include <stdbool.h>

#define CHAR_LEN 256

/**
 * Exercise 1-13 Print a word per line
 */
int main() {
  int c, i;
  bool is_in_newline = false;
  int chars[CHAR_LEN];
  
  // init array
  for (i = 0; i < CHAR_LEN; i++) {
    chars[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    chars[c]++;
  }

  for (i = 0; i < CHAR_LEN; i++) {
    if (chars[i] != 0) {
      printf("%c: %d\n", i, chars[i]);
    }
  }
  return 0;
}
