#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "cs50.h"

int main(void)
{
    string phrase;
    phrase = GetString();
    
    //printf("%s", phrase);
    //printf("%lu", strlen(phrase));
    
    //string newPhrase;
    
    for (int i = 0; i < strlen(phrase); i++)
    {
        if (phrase[i] == ',')
        {
            printf(", ");
        }
        else if (phrase[i] == '.')
        {
            printf(". ");
            printf("%c", toupper(phrase[i+1]));
            i += 1;
        }
        else
        {
            printf("%c", phrase[i]);
        }
    }
}
