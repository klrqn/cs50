#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
// jharvard@run.cs50.net (~): ./a.out
// non-negative numerator: 1
// positive denominator: 2
// 50.00%
    printf("non-negative numerator: ");
    float n = GetFloat();
    printf("positive denominator: ");
    float d = GetFloat();
    
    printf("%.2f %c\n", (n / d) * 100, 37);
}