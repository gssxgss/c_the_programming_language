#include <stdio.h>

/**
 * Exercise 1-8 Coutn spaces, tabs and newlines
 */
int main () {
  int c;
  int space_count = 0;
  int tab_count = 0;
  int newline_count = 0;
  while( (c = getchar()) != EOF) {
    if (c == ' ') {
      space_count++;
    } else if (c == '\t') {
      tab_count++;
    } else if (c == '\n') {
      newline_count++;
    }
  }
  printf("space count: %d\ntab count: %d\nnewline count: %d\n", space_count, tab_count, newline_count);
  return 0;
}
