#include <stdio.h>

int main(void)
{
    int x = 7, y = 2, z = 9;
    int* px = &x;
    int* py = &y;
    int* pz = &z;
    
    *px = (*py) + (*pz);
    
    printf("x: %i\n", x);
    printf("y: %i\n", y);
    printf("z: %i\n", z);
    
    printf("px: %i\n", *px);
    printf("py: %i\n", *py);
    printf("pz: %i\n", *pz);    
    
}