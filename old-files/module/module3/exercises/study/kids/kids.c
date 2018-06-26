/*
Write a program that prompts the user to take a guess at the average number of 
children per in the United States. Let the user know whether he/she got the answer right!

jharvard@run.cs50.net (~): ./a.out
Average number of children per family in US: 2
That is correct!
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Average number of children per family in the US: ");
    int guess = GetInt();
    
    if (guess == 2)
        printf("Correct!\n");
    else 
        printf("Not Quite!\n");
}