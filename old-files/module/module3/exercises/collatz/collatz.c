#include <stdio.h>

int collatz(int n);

int main(void)
{
    int n;
    printf("what's a number: ");
    scanf("%i", &n);
    
    printf("%i\n", collatz(n));
}

int collatz(int n)
{
    //base case
    if (n == 1)
        return 0;
    //even numbers
    else if ((n % 2) == 0)
        return 1 + collatz(n/2);
    //odd numbers
    else 
        return 1 + collatz(3*n + 1);
}