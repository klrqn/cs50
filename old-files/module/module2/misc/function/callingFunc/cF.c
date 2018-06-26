#include <string.h>
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // ... somewhere else lower down in the file
    string exampleString = GetString();  // set up an example variable to use

    int exStrLen = strlen(exampleString); // call the strlen function
    printf("%i\n", exStrLen);
    
    printf("The word/s you gave are %lu characters long.\n", strlen(exampleString)); //unsigned long
}