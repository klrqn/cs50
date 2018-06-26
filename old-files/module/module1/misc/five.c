#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int total = 0, incr = 5, count = 1;
    while (count < 7)
    {
        total = total + incr;
        count = count + 1;
    }
    printf("%i\n", total);
    
}