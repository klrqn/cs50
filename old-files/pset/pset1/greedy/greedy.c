#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change;
    printf("how much is owed?: ");
    change = GetFloat();       
    change = round(change * 100);
 
    // printf("%f", change);                //rounding check
    int count = 0;                          //dollars and cents (number of) 
    int intChange = change;
    
    while (change < 0)
    {
        printf("did you not pay me enough \n how much do i owe you?: ");
        change = GetFloat();
        change = round(change * 100);
        intChange = change;
    }
    
    if (intChange % 100 == 0)                       //whole dollars
    {
        //printf("%i\n", count);
        intChange = 0;
    }
    
    else if (intChange > 100)                       //get down to cents
        intChange %= 100;

    while (intChange > 0)
    {    
        if (intChange >= 75)
        {
            intChange %= 75;
            count += 3;
        }
        
        else if (intChange >= 50)
        {
            intChange %= 50;
            count += 2;
        }
        
        else if (intChange >= 25)
        {
            intChange %= 25;
            count += 1;
        }
        
        else if (intChange >= 20)
        {
            intChange %= 20;
            count += 2;
        }
        
        else if (intChange >= 10)
        {
            intChange %= 10;
            count += 1;
        }
        
        else if (intChange >= 5)
        {
            intChange %= 5;
            count += 1;
        }
        
        else if (intChange >= 1)
        {
            intChange -= 1;
            count += 1;
        }
    }
    printf("%i", count);
    // return count;
}