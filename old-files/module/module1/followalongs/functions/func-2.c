#include <stdio.h>
#include <cs50.h>

int PositiveInt();

int main(void)
//Get an Integer
{
    int n = PositiveInt();
    printf("Thanks for the %i\n", n);
}

//Get a Positive Integer from User
int PositiveInt(void)
{
    int n;
    do
    {
        printf("please give me a positive int: ");
        n = GetInt();
    }
    while (n < 1);
    return n;
}