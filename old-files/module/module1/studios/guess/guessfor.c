#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int answer = 8;
    printf("I'm thinking of a number between 1 and 10, can you guess what it is?\n");
    
    
    for (int i = 1; i <= 5; i++)
    {
        printf("Guess #%i: ", i);
        int guess = GetInt();
        
        if (guess != answer && i < 5)
        {
            printf("wrong!\n");
        }
        else if (guess == answer && i <= 5)
        {
            printf("correct!\n");
            break;
        }
        else if (guess != answer && i == 5)
        {
            printf("wrong!\nSorry, you ran out of guesses\n");
        }
    }
}
    
