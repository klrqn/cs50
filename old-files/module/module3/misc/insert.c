#include <stdio.h>

void sort(int array[], int length);

int main(void)
{
    int a, b, c;
    a = 1;
    b = 2;
    c = 0;
    
    a = b;
    b = c;
    c = a;
    
    printf("%i%d%d", a, b, c);
    
}