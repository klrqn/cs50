#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

string encipher(string orig_msg, int rot);

int main(int argc, string argv[])
{
    // if executed without 2 arguments return error
    if (argc != 2)
    {
        printf("Usage: ./caesar <rotation>\n");
        return 1;
    }

    // if executed with 2 arguemnts run program
    if (argc == 2)
    {
        // get a message from user
        string msg = get_string("plaintext: ");

        // make a variable rotation integer from string arg
        int rot = strtol(argv[1], NULL, 10);

        // encipher message
        printf("ciphertext: ");
        encipher(msg, rot);
    }
    return 0;
}

string encipher(string orig_msg, int rot)
{
    // get msg length
    int msg_len = strlen(orig_msg);

    // loop through all characters of the phrase
    for (int i = 0; i < msg_len; i++)
    {
        // if the letter is lower case
        if (orig_msg[i] >= 'a' && orig_msg[i] <= 'z')
        {
            // rotate by the input num within all lowercase chars
            printf("%c", (((orig_msg[i]+rot) - 'a') % 26) + 'a');
        }
        // else if the letter is lower case
        else if (orig_msg[i] >= 'A' && orig_msg[i] <= 'Z')
        {
            // rotate by the input num within all uppercase chars
            printf("%c", (((orig_msg[i]+rot) - 'A') % 26) + 'A');
        }
        else
        {
            // else use existing char
            printf("%c", (char) orig_msg[i]);
        }
    }
    printf("\n");
    return 0;
}
