#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "cs50.h"

int main(void)
{
    // get variables
    printf("What Year is it: ");
    int Y = GetInt();
    string Is = "Leap Year";
    string Not = "Not Leap Year";

    // contraints
    if (Y < 0 || Y > 9999)
    {
        printf("Year must be greater than 0 and less than 10,000");
        return 1;
    }
    
    if (Y % 100 == 0 && Y % 400 == 0)
        printf("%s", Is);
        
    else if (Y % 100 == 0)
        printf("%s", Not);
        
    else if (Y % 4 == 0)
        printf("%s", Is);
        
    else
        printf("%s", Not);
    
}