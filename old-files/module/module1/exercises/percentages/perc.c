#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("give me 2 numbers:\n");
    float num1 = GetFloat();
    float num2 = GetFloat();
    printf("number 1 is %g percent of number 2\n", (num1 / num2) * 100);
    printf("number 2 is %g percent of number 1\n", (num2 / num1) * 100);
}