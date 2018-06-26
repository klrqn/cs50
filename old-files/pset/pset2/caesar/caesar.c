#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

//a = 97, A = 65 ASCII

int main(int argc,string argv[])
{
    if (argc != 2)  //return error if no or more than one command line arguments are entered.
    {   
        printf("error\n");
        return 1;
    }
    
    //printf("give me a phrase: ");
    string phrase = GetString();                                    //phrase = original phrase
    int shift = atoi(argv[1]);                                   //shift = move char this number
    int phraseLength = strlen(phrase);
    //printf("phrase length: %i\n", phraseLength);
    //string code[phraseLength];                                       //code = new 'phrase'
    
    
    for (int i = 0; i < phraseLength; i++)
    {
        if (isalpha(phrase[i]))
        {
            if isupper(phrase[i])
            {
                printf("%c", (((phrase[i] + shift) - 'A') % 26) + 'A');
            }
            else if islower(phrase[i])
            {
                printf("%c", (((phrase[i] + shift) - 'a') % 26) + 'a');
            }
            else
            {
                printf("%c", phrase[i]);
            }
        }
        else
        {
            printf("%c", phrase[i]);
        }
    }
    printf("\n");
}
