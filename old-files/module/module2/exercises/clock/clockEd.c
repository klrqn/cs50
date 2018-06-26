/*
$ ./clocksage
What is the hour? 3
How far into the future shall I cast mine eye? (number of hours plz): 5
My prediction: 5 hours hence, the clock shall strike 8!

$ ./clocksage
What is the hour? 3
How far into the future shall I cast mine eye? (number of hours plz): 12
My prediction: 12 hours hence, the clock shall strike 3!

$ ./clocksage
What is the hour? 3
How far into the future shall I cast mine eye? (number of hours plz): 25
My prediction: 25 hours hence, the clock shall strike 4!
*/

#include <stdio.h>
#include <cs50.h>

int clock_(int hour);

int main(void)
{
    //
    int hour = 0;
    clock_(hour);
}

int clock_(int hour)
{
    //double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};    array defined
    int hours[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; //could use a loop...
    int i;
    //int found = 0;
    for (i = 0; i < 12, i++)
    {
        printf("What is the hour? ");
        hour = GetInt();
        if (hour < 13 && hour > 0)
            printf("so it's %i o'clock!", hour);
            
    }
}