/*************************************************************************************************
        $ ./smalltalk
        How's your day going? fine
        Not much of a talker, I see. Maybe elaborate a little more next time.
        
        $ ./smalltalk
        How's your day going? Pretty good, I just wrote the code that comprises your existence.
        zzzzzz... Huh? Oh yeah, totally. I know what you mean...
        
        $ ./smalltalk
        How's your day going? Good. I like your shoes.
        Nice! Mine's going well, thanks for asking.

*************************************************************************************************/

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    printf("How is your day going? ");
    string response = GetString();
    
    if (strlen(response) < 13)
        printf("not much of a talker, eh?\n");
    else if (strlen(response) >= 13 && strlen(response) <= 26)
        printf("Nice! My day is good too...oh wait you didn't ask me that?! how rude!\n");
    else
        printf("zzzzzz... Huh? Oh yeah, totally. I know what you mean...\n");
}