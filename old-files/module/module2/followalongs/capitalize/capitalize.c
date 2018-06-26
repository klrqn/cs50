#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = GetString();
    
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));
        // if (islower(s[i]))                              //(s[i] >= 'a' && s[i] <= 'z')
        // {
        //     printf("%c", toupper(s[i]));                //("%c", s[i] - (32)); // 97 - 65, a - A
        // }
        // else
        // {
        //     printf("%c", s[i]);
        // }
    }
    printf("\n");
}

//A = 65
//a = 97