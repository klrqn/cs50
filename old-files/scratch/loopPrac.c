#include <stdio.h>
#include <cs50.h>

int main(void /* int argc, char* argv[] */ )
{
    
    
    int w = 0;                      // WHILE loop Example 
    while (w < 10)                    
    { 
        printf("%i\n", w); 
        printf("hellothere\n");
        w++;
    }
    
    
    
    {                                //FOR loop Example
        for (int f=5; f>-1; f--)     //1. init var 2.condition to keep running 3.statement that is executed after each iteration of loop
        printf("%i\n", f);
    }
    
    
    int dw;                         //DO WHILE loop Example
    do
    {
        printf("Type a positive number: ");
        dw = GetInt();
    }
    while (dw <= 0);
    {
        printf("try again...\n");
    }

    printf(".\n.\n.\nBLAST OFFFFF!!!\n");
    return 0;
}