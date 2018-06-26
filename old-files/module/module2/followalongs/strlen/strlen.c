#include <stdio.h>
#include <math.h>
#include <cs50.h>
#include <string.h>

int charCounter(string theString);

int main(void)
{
    int pr = charCounter("What the Heck is This");
    printf("%i\n", pr);
}

int charCounter(string theString)
{
    int counter = 0;
    while (theString[counter] != '\0')
    {
        counter++;
    }
    return counter;
}