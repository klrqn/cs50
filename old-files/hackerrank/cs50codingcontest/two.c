#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "cs50.h"

int main(void)
{
    // get variables
    printf("Starting Account Balance: ");
    float B = GetFloat();
    printf("What is the annual interest rate (decimal notation): ");
    float R = GetFloat();
    printf("Number of years: ");
    int N = GetInt();
    
    // contraints
    if (B < 0 || R < 0 || N < 0)
    {
        printf("Error, Enter a Positivie Number");
        return 1;
    }
    
    // iterate interest through the years
    for (int i = 0; i < N; i++)
    {
        B = B * (1 + R);
    }
    
    // total balance at end of term
    printf("%.02f\n", B);
    return 0;
}