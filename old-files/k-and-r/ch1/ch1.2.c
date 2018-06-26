// Variables and Arithmetic Expressions
// The next program uses the formula C = (5/9)(F-32)

#include <stdio.h>

/* print Fahrenheit-Celcius Table 
 * for F = 0, 20, 40, ..., 300 */
 
int main()
{
    int fahr, celsius;
    int upper, lower, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;
    
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}