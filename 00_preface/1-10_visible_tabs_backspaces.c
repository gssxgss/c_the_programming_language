#include <stdio.h>
/**
 * Exercise 1-10 Make tab backspace and backslash visible
 * In MacOS, type ctrl+v, ctrl+h to perform a backspace
 */
int main () {
  int c;

  while( (c = getchar()) != EOF) {
    switch (c) {
      case '\t':
        putchar('\\');
        putchar('t');
        break;
      case '\b':
        putchar('\\');
        putchar('b');
        break;
      case '\\':
        putchar('\\');
        putchar('\\');
        break;
      default:
        putchar(c);
    }
  }
  return 0;
}
