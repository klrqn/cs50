#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int num;
    printf("Give me a number, any (whole) number...\n");
    num = GetInt();
    if (num > 0)
        printf("your number is Positive!\n");
    else if (num < 0)
        printf("your number is Negative\n");
    else
        printf("your number is ZERO\n");
}