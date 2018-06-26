#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// capitalizes all vowels in a string

void capVow(char* str);

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("usage: ./program \"string\"\n");
        return 99;
    }
    
    // new string variable takes argv[1]
    char* str = argv[1];
    
    // function
    capVow(str);
    
    printf("I took the liberty of capitalizing all your vowels...\n");
    printf("%s\n", str);
}

void capVow(char* str)
{
    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        // declare variable c = str[i];
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o'  || str[i] == 'u')
        {
            // str[i] = toupper(c);
            str[i] = toupper(str[i]);
        }
    }
}