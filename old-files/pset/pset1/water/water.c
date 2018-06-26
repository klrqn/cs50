#include <stdio.h>
#include <cs50.h>

//This program determines the amount of water you use every time you shower.

int main(void)
{
                        //declaring variables
    float bottles;          //bottles of water used
    float gal;              //gallons of water 
    int oz;                 //ounces of water used
    int min;                //minutes you're in the shower
    
    printf("Minutes: ");    //get how long you take a shower for (min)
    min = GetInt();
    while (min < 0)
    {
        printf("How do you take a shower in %i minutes?\n", min);
        printf("Minutes: ");//get how long you take a shower for (min)
        min = GetInt();
    }
    if (min == 0)
        printf("You don't take showers? Smelly!\n");
    else
    {                                   //math
    gal = min * 1.5;                    // 1.5 gallons of water used per minute
    oz = gal * 128;                     // 128 oz per gallon
    bottles = oz / 16;                  // 1 botter per 16 ounces
    printf("Bottles: %g\n", bottles);   // number of bottles used, printed
    }
}