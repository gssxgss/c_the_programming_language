# include <stdio.h>

/**
 * Exercise 1-5
 */
int main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;

    // NOTE 
    // int to float is ok, but not the other way.
    fahr = upper;
    printf("%s %s\n", "fahr", "celsius");
    while (fahr >= lower) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr - step;
    }
    return 0;
}
