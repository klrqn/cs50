#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

//a = 97, A = 65 ASCII

int main(int argc,string argv[])
{
    if (argc != 2)         //return error for wrong number of arguments (just need one key, at argv[1])
    {   
        printf("error\n");
        return 1;
    }
    
    int letter = 0;
    for (int i = 0, n = strlen(argv[1]); i < n && !letter; i++)      //check that all chars entered into key are letters.
    {
        if (!isalpha(argv[1][i]))
        {
            letter = 1;
            printf("error\n");
            return 0;
        }
        else
            letter = 0;
            
    }
}