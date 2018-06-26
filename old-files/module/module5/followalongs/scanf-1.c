#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char* s; 
    printf("string please: ");
    scanf("%s", s);
    printf("thanks for the %s\n", s);
    printf("address is %p\n", &s);
}
