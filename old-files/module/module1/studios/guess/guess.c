#include <stdio.h>
#include <cs50.h>

/*
$ ./guess
I'm thinking of a number between 1 and 10. Can you guess what it is?
Guess #1: 5
Wrong!
Guess #2: 9
Wrong!
Guess #3: 4
Correct!
*/

int main(void)
{   
    int answer = 5;
    int guess;
    int counter = 1;
    
    printf("I'm thinking of a number between 1 and 10. Can you guess what it is?\n");
    printf("Guess #%i: ", counter);
    guess = GetInt();
    
    while (guess != answer && counter < 5)
    {
        printf("Wrong!\n");
        counter++;
        printf("Guess #%i: ", counter);
        guess = GetInt();
    }
    if (guess == answer)
    {
        printf("Correct!\n");
    }
    else
    {
        printf("Ran outta Guesses!\n");
    }
}

