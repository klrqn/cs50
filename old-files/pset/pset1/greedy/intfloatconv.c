#include <stdio.h>
#include <cs50.h>
#include <math.h>

/*
    a greedy algorithm is one "that always takes the best immediate, or local, 
    solution while finding an answer. Greedy algorithms find the overall, or globally, 
    optimal solution for some optimization problems, but may find less-than-optimal 
    solutions for some instances of other problems."
*/ 

int main(void)
{
    
    float x = 2.34;
    //double d = round(x * 100);
    int i = (int) round(x * 100);
    printf("%i \n", i);
    //printf("%i", d);
}