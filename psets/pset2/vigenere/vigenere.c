#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

string encipher(string orig_msg, string keyword);

int main(int argc, string argv[])
{
    // if executed without 2 arguments return error
    if (argc != 2)
    {
        printf("Usage: ./vigenere <string>\n");
        return 1;
    }

        // if executed with 2 arguemnts run program
    if (argc == 2)
    {
        int key_len = strlen(argv[1]);
        // iterate through keyword
        for (int i=0; i < key_len; i++)
        {
            // if any char in keyword isn't alphabetical
            if (!isalpha(argv[1][i]))
            {
                // return an error
                printf("keyword must be all alphabetic characters\n");
                return 1;
            }
        }

        // get a message from user
        string msg = get_string("plaintext: ");

        // encipher message
        encipher(msg, argv[1]);
    }
    return 0;
}


string encipher(string orig_msg, string keyword)
{
    // printf("ciphertext: ");

    // get msg length
    int msg_len = strlen(orig_msg);
    int key_len = strlen(keyword);

    // loop through all characters of the phrase
    int counter = 0;
    for (int i = 0; i < msg_len; i++)
    {
        // printf("original message at [%i]: %c\n", i, orig_msg[i]);
        // printf("keyword  message at [%i]: %c\n", i, (keyword[counter % key_len]-'a'));
        // printf("keyword  message at [%i]: %i\n", i, (keyword[counter % key_len]-'A'));
        // printf("enciphe  message at [%i]: %c\n", i, (orig_msg[i] + (keyword[counter % key_len]-'a')));

        // if the letter is lower case
        if (orig_msg[i] >= 'a' && orig_msg[i] <= 'z')
        {
            printf("rotate by: %i\n", (keyword[counter % key_len]-'a'));
            // rotate by the input num within all lowercase chars
            // printf("%c", (((orig_msg[i] + (keyword[counter % key_len]-'a') - 'a') % 26) + 'a'));
            counter++;
        }
        // else if the letter is lower case
        else if (orig_msg[i] >= 'A' && orig_msg[i] <= 'Z')
        {
            // rotate by the input num within all uppercase chars
            printf("rotate by: %i\n", (keyword[counter % key_len]-'A'));
            // printf("%c", (((orig_msg[i] + (keyword[counter % key_len]-'A') - 'A') % 26) + 'A'));
            counter++;
        }
        else
        {
            // else use existing char
            printf("%c", (char) orig_msg[i]);
        }
    }
    printf("\n");
    return 0;


    return 0;
}

// :( encrypts "BaRFoo" as "CaQGon" using "BaZ" as keyword
//    "ciphertext: CaQGoh"


// :( encrypts "hello, world!" as "iekmo, vprke!" using "baz" as keyword
//    "ciphertext:  iekmo, wnslc!"