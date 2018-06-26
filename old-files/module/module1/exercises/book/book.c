#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("what is your favorite book? ");
    string book = GetString();
    printf("I Love %s\n", book);
    printf("...\n");
    printf("...I actually read it when I was really young\n");
    printf("it's probably not as great as I remember..\n");
}