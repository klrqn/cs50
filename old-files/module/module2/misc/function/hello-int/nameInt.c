#include <stdio.h>
#include <cs50.h>
#include <string.h>

void yourName(string s);
int PosInt(void);

int main(void)
{
    printf("what is your name? ");
    string name = GetString();
    yourName(name);
    int n = PosInt();
    printf("Thanks for the %i, %s\n", n, name);
}

void yourName(string s)
{
    printf("well, hell, %s\n", s);
}

int PosInt(void)
{
    int n;
    do
    {
        printf("positive integer, please: ");
        n = GetInt();
    }
    while ( n < 1 );
    return n;
}