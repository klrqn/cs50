#include <stdio.h>

int main(void)
{
    printf("Two things are heading towards each other!\n");

    // i goes up, j goes down (twice as fast), until they meet (or cross)
    for (int i = 0, j = 100; i <= j; i++, j = j - 2)
    {
        int distance = j - i;
        printf("The distance between the two things is %i\n", distance);
        printf("i = %i \nj = %i\n", i, j);
    }
    printf("And now the two things have crossed paths\n");
}