#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("please give me an integer: ");
    int n = GetInt();
    
    if (n > 0)
    {
        printf("you picked a positive integer\n");
    }
    else if (n == 0)
    { 
        printf("you picked 0\n");
    }
    else
    {
        printf("you picked a negative number\n");
    }
}