#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float tax = 1.05;
    
    printf("How many donuts would you like today?\n");
    float donut = GetFloat ();
    
    printf("ok, let me get that right, you want %g donuts? \n", donut);
    printf("How much do you want to pay for your donut? \n");
    float price = GetFloat();
    printf("That will be $%.2f dollars \n", price*donut*tax);

}