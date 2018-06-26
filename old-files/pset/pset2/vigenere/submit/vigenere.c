#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc,string argv[])
{
    if (argc != 2)          //return error for wrong number of arguments (just need one key, at argv[1])
    {   
        printf("error\n");
        return 1;
    }
    
    int keyLength = strlen(argv[1]);      //initiate lenth of 'key'(argv[1]) into variable 'keyLength'
    for (int i = 0; i < keyLength; i++)   //check that all chars entered into key are letters.
    {
        if (!isalpha(argv[1][i]))
        {
            printf("error\n");
            return 1;
        }
    }
    
  // -------------------------------------------------------------  //ABOVE ALL checks to make sure command line arguments are correct
  
    string phrase = GetString();                //phrase = plaintext
    
    int key[keyLength];                         //key array is the shift set
    for (int i = 0; i < keyLength; i++)
    {
        char letter = argv[1][i];
        
        if isupper(argv[1][i])
        {
            key[i] = letter - 'A';
        }
        else if islower(argv[1][i])
        {
            key[i] = letter - 'a';
        }                                       //assigning key[] values
        //printf("%i, ", key[i]);               //prints key set
    }

    int phraseLength = strlen(phrase);
    
    


    for (int i = 0, j = 0; i < phraseLength; i++, j++)
    {
        if (!isalpha(phrase[i]))
        {
            printf("%c", phrase[i]);
            j--;
        }
        else if (isalpha(phrase[i]))
        {
            if isupper(phrase[i])
            {
                printf("%c", (((phrase[i] + key[j % keyLength]) - 'A') % 26) + 'A');
            }
            else if islower(phrase[i])
            {
                printf("%c", (((phrase[i] + key[j % keyLength]) - 'a') % 26) + 'a');
            }
        }
    }
    printf("\n");
}
