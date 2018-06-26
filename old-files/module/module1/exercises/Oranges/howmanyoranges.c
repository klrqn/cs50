#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    printf("How many orange slices do you want to eat? ");
    
    float slices = GetFloat(); //total slices of oranges - input
    float oranges = slices / 8; //total number of oranges
    float orangesRounded = ceil(oranges); //number of oranges rounded to nearest whole number
    
    printf("You should buy %g Oranges!\n", orangesRounded);
}