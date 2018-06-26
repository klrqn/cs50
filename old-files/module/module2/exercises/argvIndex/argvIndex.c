#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
    for (int i = 0; i < argc; i++)
        printf("Argument %i: %s\n", i, argv[i]);
}

/*
$ ./argvindex I love the cards
Argument 0: ./argvindex
Argument 1: I
Argument 2: love
Argument 3: the
Argument 4: cards
*/