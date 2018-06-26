#include <stdio.h>
#include <cs50.h>
#include <string.h>

void stringIndex(string word);

int main(void)
{
    printf("Give me a string please: ");
    string word = GetString();
    stringIndex(word);
}

void stringIndex(string word)
{
    for (int i = 0, w = strlen(word); i < w; i++)
    {
        printf("The character at index %i is %c\n", i, word[i]);
    }
}