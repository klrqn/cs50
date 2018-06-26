 /**
  * Filename: ages.c
  * Save in Folder: ~/workspace/module2/followalongs/ages

  *   Declare a variable n of type int
  *   Do 
  *      Print "Number of people in room: "
  *      Assign user input to the variable n
  *   While(n < 1)
  * 
  * You will find instructions to complete this task in the video. 
  * You will be modifying this code as you go along.
  *
  */
  
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = 0;
    printf("how many ppl are in the room?");
    while (n < 1)
    {
        n = GetInt();
    }
    int age[n];
    for (int i = 0; i < n; i++)
    {
        printf("how old is person %i? ", i+1);
        age[i] = GetInt();
    }
    for (int i = 0; i < n; i++)
    {
        printf("the #%i person's age is: %i\n", i+1, age[i]);
    }
    return 0;
}