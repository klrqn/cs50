#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

string encipher(string orig_msg, string keyword);

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
        string keyword = argv[1];
        // get a message from user
        string msg = get_string("plaintext: ");

        // encipher message
        encipher(msg, keyword);
    }
    return 0;
}


string encipher(string orig_msg, string keyword)
{
    printf("original message: %s\nkeyword: %s\n", orig_msg, keyword);
    return 0;
}