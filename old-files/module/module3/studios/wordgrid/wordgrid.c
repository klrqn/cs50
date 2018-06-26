//Let's explore this by writing a program that receives 3 strings, 
//each exactly 3 characters long (you might think of this like a grid or matrix of 9 chars), 
//and prints the grid to the conosle, with each word in its own column, like so:

#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (strlen(argv[1]) == 3 && strlen(argv[2]) == 3 && strlen(argv[3]) == 3 && argc == 4)
        printf("ok! good to go!\n");
    else
    {
        printf("try again!\n");
        return 0;
    }
    
    int n = strlen(argv[1]);
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%c", argv[j][i]);
        }
        printf("\n");
    }
}