#include <stdio.h>
#include <cs50.h>
#include <string.h>

//function prototype
int cube(int a);

int main(void)
{
    printf("gimme a integer: ");
    int x = GetInt();
    int y = cube(x);
    printf("%i\n", y);
}

int cube(int x)
{
    int y = x * x * x;
    return y;
}