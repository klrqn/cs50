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
    printf("original message: %s\nkeyword: %s\n", orig_msg, keyword);
    // get msg length

    int msg_len = strlen(orig_msg);
    int key_len = strlen(keyword);

    // loop through all characters of the phrase
    for (int i = 0; i < msg_len; i++)
    {


        // printf("original message at [%i]: %c\n", i, orig_msg[i]);
        // printf("keyword  message at [%i]: %c\n", i, (((keyword[i % key_len]-'a')%26)+'a'));
        // printf("keyword  message at [%i]: %i\n", i, (((keyword[i % key_len]-'a')%26)+'a'));
        // printf("enciphe  message at [%i]: %c\n", i, (orig_msg[i] + keyword[i % key_len]));


        // if the letter is lower case
        if (orig_msg[i] >= 'a' && orig_msg[i] <= 'z')
        {
            // rotate by the input num within all lowercase chars
            printf("%c", (((orig_msg[i] + (keyword[i % key_len]-'a') - 'a') % 26) + 'a'));
        }
        // else if the letter is lower case
        else if (orig_msg[i] >= 'A' && orig_msg[i] <= 'Z')
        {
            // rotate by the input num within all uppercase chars
            printf("%c", (((orig_msg[i] + (keyword[i % key_len]-'A') - 'A') % 26) + 'A'));
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

// :) vigenere.c exists.
// :) vigenere.c compiles.
// :( encrypts "a" as "a" using "a" as keyword
//     expected "ciphertext: a\n", not "original messag..."
// :( encrypts "barfoo" as "caqgon" using "baz" as keyword
//     expected "ciphertext: caq...", not "original messag..."
// :( encrypts "BaRFoo" as "CaQGon" using "BaZ" as keyword
//     expected "ciphertext: CaQ...", not "original messag..."
// :( encrypts "BARFOO" as "CAQGON" using "BAZ" as keyword
//     expected "ciphertext: CAQ...", not "original messag..."
// :( encrypts "world!$?" as "xoqmd!$?" using "baz" as keyword
//     expected "ciphertext: xoq...", not "original messag..."
// :( encrypts "hello, world!" as "iekmo, vprke!" using "baz" as keyword
//     expected "ciphertext: iek...", not "original messag..."
// :) handles lack of argv[1]
// :) handles argc > 2
// :) rejects "Hax0r2" as keyword