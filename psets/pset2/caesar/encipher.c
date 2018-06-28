#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int main (void) {

    int rot = get_int("enter rot: ");
    string phrase = get_string("enter phrase: ");
    int phrase_len = strlen(phrase);

    printf("rotate by: %i\n", rot);
    printf("the phrase is: %s\n", phrase);
    printf("the phrase length is: %i\n", phrase_len);



    // loop through all characters of the phrase
    for (int i=0; i<phrase_len; i++) {
        // if the letter is lower case
        if (phrase[i] >= 'a' && phrase[i] <= 'z')
        {
            // rotate by the input num within all lowercase chars
            printf("%c", (char) phrase[i]+rot % 'a');
        // else if the letter is lower case
        }
        else if (phrase[i] >= 'A' && phrase[i] <= 'Z')
        {
            // rotate by the input num within all uppercase chars
            printf("%c", (char) phrase[i]+rot % 'A');
        }
        else
        {
            // else use existing char
            printf("%c", (char) phrase[i]);
        }
    }
}