#include <stdio.h>
#include <cs50.h>


int main(void)
{
    printf("Give me a phrase: ");
    string phrase = GetString();
    printf("How many times should i say it?: ");
    int repeat = GetInt();
    
    // int count = 0;                   repeat using while loop
    // while (count < repeat)
    // {
    //     printf("%s\n", phrase);
    //     count++;
    // }
    
    for (int i = 0; i < repeat; i++)    //repeat using for loop
        printf("%s: %i\n", phrase, i);
}
    
    