#include <stdio.h>
#include <math.h>
#include <cs50.h>

bool validTriangle(void);
//positive length
//sum of any 2 has to be greater than the thrid

int main(void)
{
    validTriangle();

    
}

bool validTriangle(void)
{
    float a;
    float b;
    float c;
    do
    {
        printf("give me 3 positive triangle sides: ");
        printf("a: ");
         a = GetFloat();
        printf("b: ");
         b = GetFloat();
        printf("c: ");
         c = GetFloat();
        printf("%f, %f, %f", a, b, c);
    }
    while (a <= 0 || b <= 0 || c <= 0);
    
    if (a + b > c || a + c > b || b + c > a)
    {
        return false;
        printf("false\n");
    }
    else
    {
        return true;
        printf("true\n");
    }
}