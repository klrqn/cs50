#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    // int x = round(4.7); // = 5
    // int y = round(4.4); // = 4
    
    printf("Gimme a dollar amount: ");
    float money = GetFloat();
    float rMoney = round(money * 100) / 100;
    printf("$%f\n", rMoney);
    
    float tMoney = trunc(money);
    printf("$%f\n", tMoney);
}