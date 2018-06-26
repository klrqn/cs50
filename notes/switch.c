#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("enter an integer: ");
    printf("%i\n", x);
    switch (x)
    {
        case 1:
            printf("ONE\n");
            break;
        case 2:
            printf("TWO\n");
            break;
        case 3:
            printf("THREE\n");
            break;
        default:
            printf("NOT\n");
            break;
    }
    return -1;
}