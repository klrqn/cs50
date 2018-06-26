#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("what is the temperature in Fahrenheit? ");
    
    float conv = (float) 5 / 9;
    float f;
    f = GetFloat();
    float c = (f - 32) / conv;
    
    printf ("Temperature in Celsius: %.1f\n", c);
}
    