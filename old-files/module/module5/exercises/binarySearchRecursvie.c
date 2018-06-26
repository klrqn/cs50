/*bool search(int n, int array[], int lower, int upper);
 *that returns true if n is found in array and false otherwise.
 *
 *jharvard@run.cs50.net (~): ./a.out
 *> 4
 *YES
 */
 
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

// prototype
bool search(int n, int array[], int lower, int upper);

int main(void)
{
    printf("Please Give me an Integer: ");
    int n = GetInt();
    /* 'n' is the number we are looking for in an array */
    
    printf("enter the name of an array for sorting: ");
    FILE *file;
    char* filename = NULL;
    filename = GetString();
    file = fopen(filename, "r");
    if (!filename)
    { 
        printf("file does not exist");
        return 99;
    }
    while (!EOF)
    {
        int i = 0;
        printf("%i", file[i]);
        i++;
    }
    return 1;
    
}
