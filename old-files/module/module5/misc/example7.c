



#include <stdioh.h>

void test (int * intptr)
{
    *intptr += 4;
}

int main(void)
{
    void test (int *intptr);
    int i = 50; *p = &i;
    
    printf("before the call to test i = %i\n", i);
    test(p);
    printf("after = %i\n", i)
}