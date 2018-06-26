#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("enter an integer: ");

    if (x < 5)
    {
        printf("x is less than 5\n");
    } else {
        printf("x is not less than 5\n");
    }

    // ternary operator
    // is x less than 5? if so assign it "0" , otherwise assign it "100"
    x = (x < 5) ? 0 : 100;

    printf("%i\n", x);
}
