//class 1 studio - ll is for...letter locator. i used an array? instead of the ascii way.

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int alphapos(char a);

int main(void)
{
    char letter;
    do
    {
    printf("please enter a letter: ");
    letter = GetChar();
    }
    while (! isalpha(letter));
    
    alphapos(letter);

}

int alphapos(char a)
{
    char Lletter = tolower(a);
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    
    int found = 0;
    //a: 97
    for (int alphaNum = 0; !found && alphaNum < 26; alphaNum++)
    {
        if (Lletter == alphabet[alphaNum])
        {
            printf("%i\n", (alphaNum + 1));
            found = 1;
        }
    }
    return found;
    printf("%i", found);
}