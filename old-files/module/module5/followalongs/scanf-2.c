#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char s[10];
    // or char* s = malloc(10);
    
    printf("string please: ");
    scanf("%s", s);
    printf("thanks for the %s\n", s);
    printf("address is %p\n", &s);
}
