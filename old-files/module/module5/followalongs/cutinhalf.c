#include <stdio.h>
#include <stdlib.h>

// takes argv[1] and cuts it in half

void cutinhalf(float* n);

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("usage: ./cutinhalf float\n");
        return 99;
    }
    
    // turns argument into a float
    float n = atof(argv[1]);
    
    // run function
    cutinhalf(&n);
    
    printf("I halved the number you gave me\n");
    printf("It is now %f\n", n);
}

void cutinhalf(float* n)
{
    *n = *n / 2;
}

