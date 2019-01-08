/**
 * $ cc hello.c
 * -> generate "a.out" file
 * $ cc hello.c -o hello
 * -> generate "hello" file
 */

# include <stdio.h>

// NOTE
// "int" is required to specify the return type
int main()
{
    printf("hello world\n");
    // NOTE
    // return 0 stand for normal(success)
    return 0;
}
