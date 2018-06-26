#include <stdio.h>

int main(void)
{
    int x;
    printf("Number please: ");
    scanf("%i", &x);
    printf("Thanks for the %i\n", x);
    printf("At address: %p\n", &x);
}

//valgrind --leak-check=full ./program