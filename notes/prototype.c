#include <stdio.h>
#include <cs50.h>

//prototype
int square(int n);

int main(void)
{
    int x = get_int("x: ");
    printf("x^n = %i\n", square(x));
}

int square(int n)
{
    return n * n;
}