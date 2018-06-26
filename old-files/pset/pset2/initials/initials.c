#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int main(void)
{

    string name = GetString();                  //get someone's name
    //printf("\n");
    printf("%c", toupper(name[0]));                     //printing first character as cap
    
    for (int i = 0, n = strlen(name); i < n; i++)       //loop through array of string
    {
        if (name[i] == ' ')                              //if char in string array is equal to a space
        {
            printf("%c", toupper(name[i + 1]));              //printt the next char uppperspace
        }
    }
    printf("\n");
    
}

