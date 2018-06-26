#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    
    do
    {
        printf("Enter a valid grade: ");
        n = GetInt();
    }
    while (n > 100 || n < 0);
    
    // TODO: fix the bug!
    if (n >= 90)
        printf("You got an A!\n");
    else if (n >= 80)
        printf("You got a B!\n");
    else if (n >= 70)
        printf("You got a C!\n");
    else if (n >= 60)
        printf("You got a D!\n");
    else
        printf("ouch.\n");
}
