#include <stdio.h>
#include <cs50.h>

int factorial(int n);

int main(void)
{
    int n = GetInt();
    factorial(n);
}

int factorial(int n)
{
    //printf("%i", n);
    if (n < 2) {
        printf("1\n");
        return 1;
    }
    printf("%i - ", n);
    return factorial(n-1);
}