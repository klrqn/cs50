#include <stdio.h>
#include <ctype.h>
//#include <stdlib.h>
//#include <string.h>
#include <cs50.h>

#define SIZE 26

int hash_Func(char* key) 
{
    int hash = toupper(key[0]) - 'A';
    //printf("%i", hash);
    return hash % SIZE;
}

int main(void)
{
    printf("Enter a Word: ");
    string word = GetString();
    printf("%i\n", hash_Func(word));
    return hash_Func(word);
}