#include <stdio.h>
#include <cs50.h> // eprintf is a part of this

int main(void) {

    //prompt user for a positive number
    int n;
    do
    {
        eprintf("about to prompt user for a number --- ");
        n = get_int("Positive Number: ");
    }
    while (n <= 0);

    // print out this many rows
    for (int i = 0; i < n; i++)
    {
        eprintf("about to print columns --- ");
        // print out this many columns
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}