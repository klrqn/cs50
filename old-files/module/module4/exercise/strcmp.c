#include <stdio.h>
#include <cs50.h>
#include <string.h>

// TODO: add the function signature for customstrcmp
bool customstrcmp(char* a, char* b);

int main(void)
{
    printf("\nString 1?: ");
    char* string1 = GetString();
    printf("\nString 2?: ");
    char* string2 = GetString();

    bool areEqual = customstrcmp(string1, string2);

    if (areEqual){
        printf("\nBingo! The strings are equal!\n");
    } else {
        printf("\nThe strings are not equal!\n");
    }
}

/**
 * customstrcmp
 * iterates through two strings, character by character
 * returns true if they are exactly the same, otherwise returns false
 */
bool customstrcmp(char* a, char* b) 
{
    int length_a = strlen(a);
    int length_b = strlen(b);
    
    if (length_a != length_b)
        return false;
    else if (length_a == length_b) 
    {
        int count = 0;
        for (int i = 0; i < length_a; i++)
        {
            if (a[i] == b[i]) {
                count ++;
            }
        }
        if (count == length_a) 
            return true;
        else 
            return false;
    }
    return 1;
}