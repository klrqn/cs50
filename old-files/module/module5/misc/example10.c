#include <stdio.h>

int arraySum (int array[], const int n)
{
    int sum = 0, *ptr;
    int *const arrayEnd = array + n;
    
    for (ptr = array; ptr < arrayEnd; ++ptr)
    {
       sum += *ptr; 
    }
    return sum;
}

int main(void)
{
    int arraySum (int array[], const int n);
    
    int array[10] = {1,2,3,4,5,6,7,8,7,6};
}