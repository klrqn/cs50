#include <stdio.h>
#include <cs50.h>
#include <string.h>

//argument count - the number of words in total that the user has typed
//argument vector - array storing all of the words that the user has typed 

int main(int argc, string argv[])
{
    
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]); //argv[0] is the name of the program
    }
}