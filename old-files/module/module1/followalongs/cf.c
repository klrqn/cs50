#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Temperature in F: ");
    float f = GetFloat();
    printf("OK! Temperature in C is %g\n", (f-32)*5/9);
}