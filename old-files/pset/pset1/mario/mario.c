#include <stdio.h>
#include <cs50.h>

//int getNumb(int a);                                       function?

int main(void)
{
    int number;                                             //number of rows in mario's pyramid
    printf("Height: ");
    number = GetInt();


    if (number < 0 || number > 23)                         //keeps pyramid within reasonable size
    {
        printf("Height: ");
        number = GetInt();
    }
    for (int i = 0; i < number; i++)                        //height
    {
        for (int j = 1; j < (number - i); j++)              //width of spaces
            printf("-");

            printf("\n");
    }
}

    