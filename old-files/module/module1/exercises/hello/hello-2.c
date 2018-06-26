#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Hello, What is your Name? ");
    string name = GetString();
    printf("Hello %s\n", name);
}