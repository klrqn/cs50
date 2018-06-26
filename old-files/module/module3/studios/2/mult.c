#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// int mult(int a, int b);

// int main(void)
// {
//     printf("what two numbers?\n");
//     int a, b;
//     scanf("%i", &a);
//     scanf("%i", &b);
//     int r1 = mult(a, b);
//     printf("%i\n", r1);
// }

int mult(int a, int b)
{
    if (b < 0)
    {
        a = -a;
        b = -b;
    }
    if (a == 0 || b == 0)
        return 0;
    else if (a == 1)
        return  b;
    else if (b == 1)
        return a;
    else 
        return a + mult(a, b-1);
}