# include <stdio.h>

/**
 * Exercise 1-4
 */
int main()
{
    float fahr, celsius;
    float lower, upper, step;
    
    lower = -1.0;
    upper = 10.0;
    step = 1.0;

    // NOTE 
    // int to float is ok, but not the other way.
    celsius = lower;
    printf("%7s %4s\n", "celsius", "fahr");
    while (celsius <= upper) {
        fahr = (9.0 / 5.0) * celsius + 32.0;
        printf("%6.0f %5.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}
