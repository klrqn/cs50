#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("please give me 2 integers: ");
    int x = GetInt();
    int y = GetInt();
    printf("The sum of %d and %d is %d\n", x, y, x+y);
}