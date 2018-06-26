#include <stdio.h>

int main(void)
{
    for (int i = 65; i < 65 + 26; i++)
    {
        printf("%i is %c\n", i, (char) i); //typecasting the integer i to a character equivalent i.
    }
}