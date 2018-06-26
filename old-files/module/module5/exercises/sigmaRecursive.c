/* Write a recursive function called sigma with a prototype of
   int sigma (int n);
   that adds the numbers 1 through n and returns the sum.  */
 
#include <stdio.h>
#include <cs50.h>

int sigma(int n)
{
    if (n<2)
        return 1;
    return n + sigma(n-1);
}

int main(void)
{
    int sum = 0;
    printf("Please Give me an Integer: ");
    int n = GetInt();
    printf("%i! = ", n);
    sum += sigma(n);
    printf("%i\n", sum);
    return 0;
}