#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int even;
    do
    {
        printf("Give me an even integer, please...");
        even = GetInt();
    }
    while (even % 2 != 0);
    printf("thanks for the even integer!\n");
}