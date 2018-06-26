#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("how old are you?: ");
    int age = GetInt();
    
    if (age > 15)
    {
        printf("you can drive!\n");
    }
    if (age > 17)
    {
        printf("you can vote!\n");
    }
    if (age > 20)
    {
        printf("you can drink!\n");
    }
    else
    {
        printf("you're just a baby!\n");
    }
}
