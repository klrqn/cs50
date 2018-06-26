#include <stdio.h>
#include <cs50.h>

//int getNumb(int a);                                       function?

int main(int argc, string argv[])
{
    int number;                                   
    number = atoi(argv[1]);


    if (number < 0 || number > 23)                         //keeps pyramid within reasonable size
    {
        printf("Height: ");
        number = GetInt();
    }
    
    
    for (int i = 0; i < number; i++)                        //height
    {
        for (int j = 1; j < (number - i); j++)              //width of spaces
            printf(" ");
        for (int block = 0; block < (i + 2); block++)       //width of blocks
            printf("#");
    printf("\n");
    }
}

    