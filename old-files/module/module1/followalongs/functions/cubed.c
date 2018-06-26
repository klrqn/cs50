#include <stdio.h>
#include <cs50.h>

int cubed(int a);

int main(void)
{
    printf("give me an integer please... \n");
    int x = GetInt();
    printf("taking your integer...\n");
    printf("and cubing!\n");
    x = cubed(x);
    printf("your number is now %i!\n", x);
    
}

int cubed(int n)
{
    return (n * n * n);
}