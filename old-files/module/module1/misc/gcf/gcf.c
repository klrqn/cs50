#include <stdio.h>
#include <cs50.h>

//finds the greatest common demoninator of two integers.

int main(void)
{
    int a, b, x, y, temp; 
    printf("Give Me Two Numbers,\nAnd I'll find the Greatest Common Denominator: ");
    a = GetInt();
    printf("Number Two? ");
    b = GetInt();
    x = a;
    y = b;
    
    while (y!= 0)
    {
        temp = x % y;
        x = y;
        y = temp;
    }
    printf("the greatest common denominator of %i and %i is %i\n", a, b, x);
}