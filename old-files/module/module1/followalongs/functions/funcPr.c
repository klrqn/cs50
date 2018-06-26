#include <stdio.h>
#include <cs50.h>

//prototype?
void PrintName(string name);

int main(void)
{
    printf("your name please: ");
    string s = GetString();
    PrintName(s);
}

void PrintName(string name)
{
    printf("hello, %s\n", name);
}