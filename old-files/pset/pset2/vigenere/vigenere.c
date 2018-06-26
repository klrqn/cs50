#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// int check_arg(void);

int main(int argc,string argv[])
{
    int keyLength = strlen(argv[1]);                                //initiate lenth of 'key'(argv[1]) into variable 'keyLength'
    
    if (argc != 2)                                                  //return error for wrong number of arguments (just need one key, at argv[1])
    {   
        printf("error\n");
        return 0;
    }
    
    int nonletter = 0;
    for (int i = 0; i < keyLength && !nonletter; i++)               //check that all chars entered into key are letters.
    {
        if (!isalpha(argv[1][i]))
        {
            nonletter = 1;
            printf("error\n");
            return 0;
        }
        else
        {
            nonletter = 1;
        }    
    }
    printf("pass\n");
  
  // -------------------------------------------------------------  //ABOVE ALL checks to make sure command line arguments are correct
  
    printf("give me a phrase: ");
    string phrase = GetString();                                    //phrase = original phrase
    printf("your phrase is: %s\n", phrase);
    
    int key[keyLength];                                             //ARRAY 'key' is what you use to shift the phrase
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
        }                                                           //assigning key[] values
        printf("%i, ", key[i]);  
    }
    printf("\n");
                                                                     //NEED TO REWORK SHIFT FOR MULTIPLE SHIFTS

    int phraseLength = strlen(phrase);
    printf("phrase length: %i\n", phraseLength);

    
    for (int i = 0; i < phraseLength; i++)
    {
        if (isalpha(phrase[i]))
        {
            if isupper(phrase[i])
            {
                printf("%c", (((phrase[i] + key[i % keyLength]) - 'A') % 26) + 'A');
            }
            else if islower(phrase[i])
            {
                printf("%c", (((phrase[i] + key[i % keyLength]) - 'a') % 26) + 'a');
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





//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// HOW DO I TURN THIS CHECK SECTION ARGC / ARGV INTO A SEPARATE FUNCTION?
// int check_arg(voi)
// {
//     if (argc != 2)                                                  //return error for wrong number of arguments (just need one key, at argv[1])
//     {   
//         printf("error\n");
//         return 0;
//     }
    
//     int nonletter = 0;
//     for (int i = 0, n = strlen(argv[1]); i < n && !nonletter; i++)     //check that all chars entered into key are letters.
//     {
//         if (!isalpha(argv[1][i]))
//         {
//             nonletter = 1;
//             printf("error\n");
//             return 0;
//         }
//                                                                     //else?   
//     }
// }