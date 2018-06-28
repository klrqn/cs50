#include <stdio.h>
#include <cs50.h>

// function declarations or
// prototypes
int sum(int a, int b);
int product(int a, int b);
float division(int a, int b);



int main(void)
{
    int anInt = get_int("enter an integer: ");
    int anotherInt = get_int("enter another: ");
    printf("sum    : %i\n", sum(anInt, anotherInt));
    printf("product: %i\n", product(anInt, anotherInt));
    printf("divided: %f\n", division(anInt, anotherInt));
}

int sum(int a, int b)
{
    return a + b;
}

int product(int a, int b)
{
    return a * b;
}

float division(int a, int b)
{
    return (float) a / (float) b;
}