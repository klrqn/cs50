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
int predict(int hour);

int main(void)
{
    //
    int hour = 0;
    hour = clock_(hour);
    int prediction = predict(hour);
    prediction = 1;
}

int clock_(int hour)
{
    //double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};    array defined
    //int hours[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; //could use a loop...
    int i;
    int found = 0;
    for (i = 0; !found; i++)
    {
        printf("What is the hour? ");
        hour = GetInt();
        if (hour < 13 && hour > 0)          //if hour != hours[i]
        {
            found = 1;
            printf("so it's %i o'clock!\n", hour);
        }
    }
    return hour;
}

int predict(int hour)
{
    //int hours[13] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; //could use a loop...
    printf("How far into the future shall I cast mine eye? (number of hours plz): ");
    int hoursplus = GetInt();
    
    int a = hoursplus;
    if (hoursplus > 12)
    {
        a %= 12;
        //printf("%i, %i", hoursplus, a);
    }
    
    int total = hour + hoursplus;
    
    if (total > 12)
        total %= 12;
        
    printf("My prediction: %i hours hence, the clock shall strike %i\n!", hoursplus, total);    
    
    return total;
}
    
    
        
    
    
//     hoursplus2 = hoursplus % 12;
    
//     int a = hours[(hoursplus2 - 1) ];
//     int b = hours[hour - 1];
    
//     hour = a + b;
    
//     // if (hour > 12)
//     //     hour %= 12;
//     // else if (hour == 0)
//     //     hour = 1;
//     printf("My prediction: %i hours hence, the clock shall strike %i\n!", hoursplus, hour);
//     return hour;
//     //How far into the future shall I cast mine eye? (number of hours plz): 25
//     //My prediction: 25 hours hence, the clock shall strike 4!
// }