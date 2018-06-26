#include <stdio.h>
#include <cs50.h>

void rotate(int* a, int* b, int* c);
void readnumbers(int* a, int* b, int* c);

int main(void)
{
    int x = 1;
    readnumbers

    rotate(&a, &b, &c);
    
    printf("%i, %i, %i\n", a, b, c);
}

void rotate(int* a, int* b, int* c)
{
    int tmp = *a;
    *a = *b;
    *b = *c;
    *c = tmp;
}

void readnumbers(int* a, int* b, int* c)
{
    printf("numbers below please\n")
    scanf("%d\n", a);
    scanf("%d\n", b);
    scanf("%d\n", c);
    printf("%i, %i, %i\n", a, b, c);
}